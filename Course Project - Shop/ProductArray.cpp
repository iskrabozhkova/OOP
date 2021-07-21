#include <iostream>
#include "ProductArray.hpp"

ProductArray::ProductArray() {
	this->array = std::vector<Product*>();
}
void ProductArray::addClothes(Clothes& product) {
	array.push_back(new Clothes(product));
}
void ProductArray::addShoes(Shoes& product) {
	array.push_back(new Shoes(product));
}
void ProductArray::addBooks(Books& product) {
	array.push_back(new Books(product));
}
const std::vector<Product*> ProductArray::getArray() {
	return this->array;
}
ProductArray::~ProductArray() {
	for (auto* product : this->array){
		delete product;
	}
}