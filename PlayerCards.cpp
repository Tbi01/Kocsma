#include "PlayerCards.h"
#include <vector>

using namespace std;

PlayerCards::PlayerCards() {
	cardsNumber = 0;
}

PlayerCards::~PlayerCards() {}

void PlayerCards::draw(int number, Deck& Deck_) {
	vector<Card>::iterator index;
	index = Deck_.getDeck().begin();
	
	for (int i = 0; i < number; i++) {
		/*
		itt még nem pointert adtam át.

		Cards.push_back(Deck_.getDeck().front()); //a kezünkbe rakja a pakli felsõ "number" lapját.
		Deck_.getDeck().front().~Card(); // kártya destruktor
		Deck_.getDeck().erase(Deck_.getDeck().begin()); // törlés */

		Cards.push_back(Deck_.getDeck().at(i));

		
		//Deck_->getDeck().erase(index);
	}

	Deck_.toString();
} 

string PlayerCards::toString() {
	string string = "";
	for (int i = 0; i < Cards.size(); i++) {
		string += Cards.at(i).getMark();
	}
	return string;
}

int PlayerCards::getCardsNumber() {
	return cardsNumber;
}