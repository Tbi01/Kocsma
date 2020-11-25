#pragma once

#include <string>
#include "Card.h"
#include <vector>


using namespace std;

class CardCollections {
public:
	virtual string toString() = 0;

protected:
	vector<Card> Cards;
};