#pragma once
#include <cstring>

class Payment {
private:
	std::string paymentMethod;
	int cardNumber;
public:
	Payment();
	int getPayment() const;
	std::string getPaymentMethod() const;
	int getCardNumber() const;
};