#pragma once
#include "Product.hpp"

class Books : public Product{
private:
	std::string author;
	std::string genre;	
public:
	Books();
	Books(const int& productID, const std::string& name, const double& price, const int& quantity, const std::string& author, const std::string& genre);
	std::string getAuthor() const;
	std::string getGenre() const;
	void print() const;
};
