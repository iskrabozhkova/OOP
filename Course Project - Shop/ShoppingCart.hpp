#pragma once
#include "ProductArray.hpp"

class ShoppingCart {
private:
	int quantity;
public:
	void addProduct();
	int getQuantity();
	void removeProduct();
};