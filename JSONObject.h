#pragma once
#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

template <class T>
class JSONObject {
private:
	char* key;
	T value;
public:
	JSONObject();
	JSONObject(const char*, T);
	JSONObject(const JSONObject& from);
	JSONObject& operator= (const JSONObject& from);
	~JSONObject();
	void setKey(const char*);
	void setValue(const T&);
	char* getKey() const;
	T getValue() const;
};

template <class T>
JSONObject<T>::JSONObject() {
	this->key = new char[1];
	this->key[0] = '\0';

	value = 0;
}
template <class T>
JSONObject<T>::JSONObject(const char* key, T value) {
	this->value = value;

	int keyLength = strlen(key);
	this->key = new char[keyLength + 1];
	strcpy(this->key, key);
	this->key[keyLength] = '\0';
}
template <class T>
JSONObject<T>::JSONObject(const JSONObject& from) {
	int keyLength = strlen(from.key);
	this->key = new char[keyLength + 1];
	strcpy(this->key, from.key);
	this->key[keyLength] = '\0';

	this->value = from.value;
}
template <class T>
JSONObject<T> &JSONObject<T>::operator=(const JSONObject& from) {
	if (this != &from)
	{
		delete[] this->key;

		int keyLength = strlen(from.key);
		this->key = new char[keyLength + 1];
		strcpy(this->key, from.key);
		this->key[keyLength] = '\0';

		this->value = from.value;
	}
	return *this;
}

template <class T>
JSONObject<T>::~JSONObject() {
	delete[] this->key;
}

template <class T>
void JSONObject<T>::setKey(const char* key) {
	delete[] this->key;

	int keyLength = strlen(key);
	this->key = new char[keyLength + 1];
	strcpy(this->key, key);
	this->key[keyLength] = '\0';
}

template <class T>
void JSONObject<T>::setValue(const T& value)
{
	this->value = value;
}

template <class T>
char* JSONObject<T>::getKey() const {
	return this->key;
}

template <class T>
T JSONObject<T>::getValue() const
{
	return this->value;
}