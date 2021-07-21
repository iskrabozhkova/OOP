#include <iostream>
#include "Product.hpp"

Product::Product() : productID(0), name(" "), price(0), quantity(0) {}
Product::Product(const int& productID, const std::string& name, const double& price, const int& quantity) : 
					productID(productID), name(name), price(price),quantity(quantity) {
}
Product::Product(const int& productID, const std::string& name, const double& price, const int& quantity, const int& size, const std::string& color) :
	productID(productID), name(name), price(price), quantity(quantity), size(size), color(color) {
}
int Product::getProductID() const {
	return this->productID;
}
std::string Product::getName() const {
	return this->name;
}
double Product::getPrice() const {
	return this->price;
}
int Product::getQuantity() const {
	return this->quantity;
}
int Product::getSize() const {
	return this->size;
}
std::string Product::getColor() const {
	return this->color;
}
void Product::print() const {
	std::cout << productID << " " << name << " " << price << " " << quantity << " " << size << " " << color << std::endl;
}
