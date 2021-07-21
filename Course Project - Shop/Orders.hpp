#pragma once
#include "Storage.hpp"

class Orders {
private:
	int orderNumber;
	int totalSum;
public:
	int getOrderNumber();
	int totalPrice();
	void printTotalPrice();
	void addOrder();
	void deleteOrder();
};
