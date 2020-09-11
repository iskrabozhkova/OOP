#pragma once
#include "CardBase.hpp"
#include <iostream>

CardBase::CardBase() : name(""), numberOfCard(1), numberofPicture(1) {}
CardBase::CardBase(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture) : name(name), numberOfCard(numberOfCard), numberofPicture(numberofPicture) {}
std::string CardBase::getName() const {
	return this->name;
}
unsigned CardBase::getNumberOfCard() const {
	return this->numberOfCard;
}
unsigned CardBase::getNumberOfPicture() const {
	return this->numberofPicture;
}