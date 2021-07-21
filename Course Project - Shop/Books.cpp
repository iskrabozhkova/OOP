#include <iostream>
#include "Books.hpp"
#include <cstring>

Books::Books() : Product(), author(" "), genre(" ") {}
Books::Books(const int& productID, const std::string& name, const double& price, const int& quantity, const std::string& author, const std::string& genre) : 
	Product(productID, name, price, quantity), author(author), genre(genre){}

std::string Books::getGenre() const {
	return genre;
}
std::string Books::getAuthor() const {
	return author;
}
void Books::print() const {
	Product::print();
	std::cout << author << " " << genre << std::endl;
}