#include <iostream>
#include "MyString.h"
#include <cstring>
using namespace std;

MyString::MyString() {
	length = 0;
	
	this->string = new char[1];
	this->string[0] = '\0';
}
MyString::MyString(const char* newString) {
	length = strlen(newString);
	string = new char[length+1];

	for (int i = 0; i < length+1; i++) {
		string[i] = newString[i];
	}
}
MyString& MyString::operator=(const MyString& from) {
	if (this != &from) {
		delete[] this->string;

		int strLen = strlen(from.string);
		this->string = new char[strLen + 1];
		strcpy(this->string, from.string);
	}
	return *this;
}
void MyString::print() const {
	for (int i = 0; i < length; i++) {
		cout << string[i];
	}
}
void MyString::append(char element){
	int position = strlen(string);
	char* newArray = new char[this->length + 1];

	for (int i = 0; i < position; i++){
		newArray[i] = this->string[i];
	}

	newArray[position] = element;
	cout << endl;

	for (int i = 0; i <= position; i++) {
		string[i] = newArray[i];
	}
	this->length = length + 1;
}
MyString::~MyString() {
	delete[] string;
}
bool MyString::operator==(const MyString& stringToCompare){
	return this->length == stringToCompare.length;
}
bool MyString::operator!=(const MyString& stringToCompare) {
	return !(*this == stringToCompare);
}
bool MyString::operator>(const MyString& stringToCompare) {
	return this->string > stringToCompare.string;
}
bool MyString::operator<(const MyString& stringToCompare) {
	return this->string < stringToCompare.string;
}