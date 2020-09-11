#pragma once
#include "CardWithHeroes.hpp"
#include <iostream>

CardWithHeroes::CardWithHeroes() : CardBase(), attackPower(1), protectPower(1) {}
CardWithHeroes::CardWithHeroes(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const unsigned& attackPower, const unsigned& protectPower) :
	CardBase(name, numberOfCard, numberofPicture), attackPower(attackPower), protectPower(protectPower) {}
void CardWithHeroes::print() const {
	std::cout << getName() << " " << getNumberOfCard() << " " << getNumberOfPicture() << " " << attackPower << " " << protectPower << std::endl;
}
unsigned CardWithHeroes::getAttackPower() const {
	return this->attackPower;
}
unsigned CardWithHeroes::getProtectPower() const {
	return this->protectPower;
}
