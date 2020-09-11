#pragma once
#include "CardBase.hpp"

class CardWithHeroes : public CardBase {
private:
	unsigned attackPower;
	unsigned protectPower;
public:
	CardWithHeroes();
	CardWithHeroes(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const unsigned& attackPower, const unsigned& protectPower);
	void print() const override;
	unsigned getAttackPower() const;
	unsigned getProtectPower() const;
};