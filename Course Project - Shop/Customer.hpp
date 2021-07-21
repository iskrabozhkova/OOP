#pragma once
#include "Orders.hpp"
#include "Login.hpp"
#include "Payment.hpp"
#include "ShoppingCart.hpp"
#include <string>

class Customer {
private:
	int customerID;
	std::string name;
	std::string address;
	int phone;
	Orders orders;
	Login login;
	Payment payment;
	ShoppingCart cart;
public:
	Customer();
	Customer(const int&, const std::string&, const std::string&, const int&);
	int getCustomerID() const;
	std::string getName() const;
	std::string getAddress() const;
	int getPhone() const;
	void registerCustomer();
};