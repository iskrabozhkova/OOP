#pragma once
#include "ProductArray.hpp"

class Storage{
private:
	ProductArray arr;
	int capacity;
public:
	Storage();
	Storage(Clothes, Shoes, Books);
	void addToStorage(Clothes clothes, int quantity);
};