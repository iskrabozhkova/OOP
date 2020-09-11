#pragma once
#include "CardWithMagic.hpp"
#include <iostream>

CardWithMagic::CardWithMagic() : CardBase(), effect("") {}
CardWithMagic::CardWithMagic(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const std::string& effect) :
	CardBase(name, numberOfCard, numberofPicture), effect(effect) {}
std::string CardWithMagic::getEffect() const {
	return this->effect;
}
void CardWithMagic :: print()const{
	std::cout << getName() << " " << getNumberOfCard() << " " << getNumberOfPicture() << " " << effect << std::endl;
	}
	
