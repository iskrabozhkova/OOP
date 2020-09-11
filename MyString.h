#pragma once

class MyString {
private:
	int length;
	char* string;
public:
	MyString();
	MyString(char*);
	MyString(const char*);
	MyString& operator=(const MyString&);
	bool operator==(const MyString&);
	bool operator!=(const MyString&);
	bool operator>(const MyString&);
	bool operator<(const MyString&);
	void print() const;
	void append(char);
	~MyString();
};
