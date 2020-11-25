#pragma once

#include <string>
#include "CardCollections.h"

using namespace std;

class Deck : public CardCollections {
public:
	string toString();
	vector<Card> getDeck();
	void shuffleDeck();
	vector<Card> draw();
	int getSize();
	Deck();
	~Deck();
private:


};