#pragma once
#include <string>

class CardBase {
private:
	std::string name;
	unsigned numberOfCard;
	unsigned numberofPicture;
public:
	CardBase();
	CardBase(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture);
	std::string getName() const;
	unsigned getNumberOfCard() const;
	unsigned getNumberOfPicture() const;
	virtual void print() const = 0;
	~CardBase() = default;

};
