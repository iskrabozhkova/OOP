#include <iostream>
#include "Clothes.hpp"

Clothes::Clothes() : Product() {}
Clothes::Clothes(const int& productID, const std::string& name, const double& price, const int& quantity, const int& size, const std::string& color) :
	Product(productID, name, price, quantity, size, color) {}
void Clothes::print() const {
	Product::print();
}