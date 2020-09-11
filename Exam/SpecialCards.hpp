#pragma once
#include "CardWithMagic.hpp"
#include "CardWithHeroes.hpp"

class SpecialCards : public CardWithMagic, public CardWithHeroes {
private:
	unsigned level;
public:
	SpecialCards();
	SpecialCards(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const std::string& effect, const unsigned& attackPower, const unsigned& protectPower, const unsigned& level);
	unsigned getLevel() const;
	void print() const override;
	~SpecialCards() = default;
};
