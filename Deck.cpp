#include "Deck.h"
#include <string>
#include  <ctime>

using namespace std;

Deck::Deck() { // pakli létrehozása és feltöltése kártyával.
	char mark;
	int value, j = 1;
	for (int i = 0; i < 52; i++) {
		
		if (j >= 3 && j <= 9) {
			mark = j+48;
			value = j - 2;
		} else {
			switch (j) {
				case 1:
					mark = 'A';
					value = 11;
					break;
				case 2:
					mark = j+48;
					value = 12;
					break;
				case 10:
					mark = 'X';
					value = j - 3;
					break;
				case 11:
					mark = 'J';
					value = j - 3;
					break;
				case 12:
					mark = 'Q';
					value = j - 3;
					break;
				case 13:
					mark = 'K';
					value = j - 3;
					break;
			}
		}
		Cards.push_back(Card(value,mark));
		j++;
		if (j == 14) j = 1;
	}
	//cout << "pakli létrehozva" << endl;
}

Deck::~Deck() {
	//cout << "Pakli törölve" << endl;
}

string Deck::toString() {
	string string = "";
	for (int i = 0; i < Cards.size(); i++) {
		string += Cards.at(i).getMark();
	}
	return string;
}

vector<Card> Deck::getDeck() {
	return Cards;
}

void Deck::shuffleDeck() {
	Card tempCard(0, '0');
	int tempIndex, shuffleTime = rand() % 20 + 5;

	srand((unsigned int)time(NULL));

	for (int j = 0; j <= shuffleTime; j++) {
		for (int i = 0; i < 52; i++) {
			tempIndex = rand() % 52;
			tempCard = Cards.at(tempIndex);
			Cards.at(tempIndex) = Cards.at(i);
			Cards.at(i) = tempCard;
		}
	}
}

int Deck::getSize() {
	return Cards.size();
}

	