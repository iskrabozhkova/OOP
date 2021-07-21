#pragma once
#include "Product.hpp"

class Shoes : public Product {
public:
	Shoes();
	Shoes(const int& productID, const std::string& name, const double& price, const int& quantity, const int& size, const std::string& color);
	void print() const;
};