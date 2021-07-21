#pragma once
#include <string>

class Product{
private:
	int productID;
	std::string name;
	double price;
	int quantity;
	int size;
	std::string color;
public:
	Product();
	Product(const int& productID, const std::string& name, const double& price, const int& quantity);
	Product(const int& productID, const std::string& name, const double& price, const int& quantity, const int& size, const std::string& color);
	int getProductID() const;
	std::string getName() const;
	double getPrice() const;
	int getQuantity() const;
	int getSize() const;
	std::string getColor() const;
	 void print() const;
};