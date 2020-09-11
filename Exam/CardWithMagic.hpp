#pragma once
#include "CardBase.hpp"

class CardWithMagic : public CardBase {
private:
	std::string effect;
public:
	CardWithMagic();
	CardWithMagic(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const std::string& effect);
	std::string getEffect() const;
	void print() const override;
};
