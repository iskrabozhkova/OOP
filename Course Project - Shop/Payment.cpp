#include <iostream>
#include "Payment.hpp"

Payment::Payment() : cardNumber(0), paymentMethod(" "){
}

std::string Payment::getPaymentMethod() const {
	return this->paymentMethod;
}
int Payment::getCardNumber() const {
	return this->cardNumber;
}
