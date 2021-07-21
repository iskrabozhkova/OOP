#pragma once
#include "Clothes.hpp"
#include "Shoes.hpp"
#include "Books.hpp"
#include <vector>

class ProductArray {
private:
	std::vector<Product*> array;
public:
	 ProductArray();
	 const std::vector<Product*> getArray();
	 void addClothes(Clothes&);
	 void addShoes(Shoes&);
	 void addBooks(Books&);
	 ~ProductArray();
};






