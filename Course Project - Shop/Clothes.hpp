#pragma once
#include "Product.hpp"

class Clothes : public Product{
public:
	Clothes();
	Clothes(const int& productID, const std::string& name, const double& price, const int& quantity, const int& size, const std::string& color);
	void print() const;
};