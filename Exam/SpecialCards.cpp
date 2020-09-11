#pragma once
#include "SpecialCards.hpp"
#include <iostream>

SpecialCards::SpecialCards() : CardWithHeroes(), CardWithMagic(), level(1) {}
SpecialCards::SpecialCards(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const std::string& effect, const unsigned& attackPower, const unsigned& protectPower, const unsigned& level) :
	CardWithHeroes(name, numberOfCard, numberofPicture, attackPower, protectPower), CardWithMagic(name, numberOfCard, numberofPicture, effect), level(level){}
unsigned SpecialCards::getLevel() const {
	return this->level;
}
