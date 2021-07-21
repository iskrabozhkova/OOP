#include "Customer.hpp"


Customer::Customer() : customerID(0), phone(0), name(" "), address(" ") {
}
Customer::Customer(const int& customerID, const std::string& name, const std::string& address, const int& phone) :
	customerID(customerID), name(name), address(address), phone(phone) {}


int Customer::getCustomerID() const {
	return customerID;
}

std::string Customer::getName() const {
	return name;
}

std::string Customer::getAddress() const {
	return address;
}

int Customer::getPhone() const {
	return phone;
}