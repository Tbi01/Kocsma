#pragma once

#include "CardCollections.h"
#include "Deck.h"

using namespace std;

class PlayerCards : public CardCollections {
public:
	string toString();
	//void playCard();
	//void revealCard();
	void draw(int number, Deck& Deck_); // nem biztos,hogy így kell.
	int getCardsNumber();
	PlayerCards();
	~PlayerCards();
private:
	int cardsNumber;
};