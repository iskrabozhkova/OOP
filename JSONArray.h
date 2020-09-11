#pragma once
#include "JSONObject.h"
#include <iostream>
#include <fstream>

template <class T>
class JSONArray{
private:
	JSONObject<T>* array;
	int numberOfObjects;
public:
	JSONArray();
	JSONArray(const JSONArray&);
	JSONArray& operator=(const JSONArray&);
	~JSONArray();
	void addObject(const char* key, const T value);
	void deleteObject(const char* key);
	T returnValue(const char* key);
	void writeInFile();
};

template <class T>
JSONArray<T>::JSONArray() : numberOfObjects(0) {
	this->array = new JSONObject<T>[1];
}

template <class T>
JSONArray <T>::JSONArray(const JSONArray& from) : numberOfObjects(from.numberOfObjects) {
	this->array = new JSONObject[from.numberOfObjects];

	for (int i = 0; i < this->numberOfObjects; i++) {
		this->array[i] = from.array[i];
	}
}

template <class T>
JSONArray<T> &JSONArray<T>::operator=(const JSONArray& from) {
	if (this != &from) {
		delete[] this->array;

		this->numberOfObjects = from.numberOfObjects;
		this->array = new JSONObject[from.numberOfObjects];

		for (int i = 0; i < this->numberOfObjects; i++) {
			this->array[i] = from.array[i];
		}
	}
	return *this;
}

template <class T>
JSONArray<T>::~JSONArray() {
	delete[] this->array;
}

template <class T>
void JSONArray<T>::addObject(const char* key, const T value) {
	JSONObject<T> object(key, value);
	JSONObject<T>* newArray = new JSONObject<T>[this->numberOfObjects +1];

	for (int i = 0; i < this->numberOfObjects; i++) {
		newArray[i] = this->array[i];
	}

	delete[] this->array;
	this->array = newArray;

	newArray[numberOfObjects] = object;
	numberOfObjects = numberOfObjects + 1;
}

template <class T>
void JSONArray<T>::deleteObject(const char* key) {
	for (int i = 0; i < numberOfObjects; i++) {
		int position = 0;
		while (array[i].getKey() == key) {
			position++;
		}

		JSONObject<T>* newArray = new JSONObject<T>[this->numberOfObjects - 1];

		for (int i = 0; i < position; i++) {
			newArray[i] = this->array[i];
		}

		for (int i = position + 1; i < this->numberOfObjects; i++)
		{
			newArray[i - 1] = this->array[i];
		}
		delete[] this->array;
		this->array = newArray;

		this->numberOfObjects--;
	}
}

template <class T>
T JSONArray<T>::returnValue(const char* key) {
	for (int i = 0; i < numberOfObjects; i++) {
		if (array[i].getKey() == key) {
			return array[i].getValue();
		}
	}
}

template <class T>
void JSONArray<T>::writeInFile() {
	std::ofstream testFile;
	testFile.open("text.txt", std::ios::out | std::ios::app);

	if (testFile.is_open()) {
		testFile << "{" << std::endl;
		for (int i = 0; i < this->numberOfObjects; i++) {
			testFile << array[i].getKey() << ": " << array[i].getValue() << std::endl;
		}
		testFile << "}" << std::endl;
	}
	else {
		std::cout << "Unable to open the file." << std::endl;
	}

	testFile.close();
}
