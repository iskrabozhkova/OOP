#pragma once
#include "CardBase.hpp"
#include <vector>

class AllCards {
private:
	std::vector<CardBase*> cards;
	static void copyMemory(const std::vector<CardBase*> source, std::vector<CardBase*> destination);
	static void clearMemory(std::vector<CardBase*> source);
public:
	AllCards();
	AllCards(const AllCards& from);
	AllCards& operator=(const AllCards& from);
	~AllCards();
	void addCardWithHeroes(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const unsigned& attackPower, const unsigned& protectPower);
	void addCardWithMagic(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const std::string& effect);
	void addSpecialCard(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const std::string& effect, const unsigned& attackPower, const unsigned& protectPower, const unsigned& level);
	void printAllInformation() const;
};
