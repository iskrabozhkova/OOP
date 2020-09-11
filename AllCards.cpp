#pragma once
#include "AllCards.h"
#include "CardWithHeroes.hpp"
#include "CardWithMagic.hpp"
#include "SpecialCards.hpp"

void AllCards::copyMemory(const std::vector<CardBase*> source, std::vector<CardBase*> destination) {
	for (auto* card : source) {
		if (dynamic_cast<CardWithHeroes*>(card) != nullptr) {
			destination.push_back(new CardWithHeroes(*dynamic_cast<CardWithHeroes*>(card)));
		}
		else if (dynamic_cast<CardWithMagic*>(card) != nullptr) {
			destination.push_back(new CardWithMagic(*dynamic_cast<CardWithMagic*>(card)));
		}
		
	}
}
void AllCards::clearMemory(std::vector<CardBase*> source) {
	for (auto* card : source) {
		delete card;
	}
}

AllCards::AllCards() {
	this->cards = std::vector<CardBase*>();
	}
AllCards::AllCards(const AllCards& from) {
	copyMemory(from.cards, this->cards);
}
AllCards& AllCards::operator=(const AllCards& from) {
	if (this != &from) {
		copyMemory(from.cards, this->cards);
		clearMemory(this->cards);
	}
	return *this;
	}
AllCards::~AllCards() {
	clearMemory(this->cards);
	}

void AllCards::addCardWithHeroes(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const unsigned& attackPower, const unsigned& protectPower) {
	this->cards.push_back(new CardWithHeroes(name, numberOfCard, numberofPicture, attackPower, protectPower));
}
void AllCards::addCardWithMagic(const std::string& name, const unsigned& numberOfCard, const unsigned& numberofPicture, const std::string& effect) {
	this->cards.push_back(new CardWithMagic(name, numberOfCard, numberofPicture, effect));
}
