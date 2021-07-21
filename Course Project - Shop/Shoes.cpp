#include <iostream>
#include "Shoes.hpp"

Shoes::Shoes() : Product() {}
Shoes::Shoes(const int& productID, const std::string& name, const double& price, const int& quantity, const int& size, const std::string& color) : 
                                                                               Product(productID, name, price, quantity, size, color) {}
void Shoes::print() const {
	Product::print();
}

