// Kocsma.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "Card.h"
#include "Game.h"
#include "CardCollections.h"
#include "Deck.h"
#include "PlayerCards.h"

using namespace std;

int main()
{
    Deck pakli;
    PlayerCards kezem;

    pakli.shuffleDeck();
    //cout << pakli.toString() << endl;

    kezem.draw(4, pakli);

    //cout << kezem.toString() << endl;

    //cout << pakli.toString() << endl;

   /* Game jatek; // �j j�t�k l�trehoz�sa

    jatek.wellcome(); //�dv�zl� �zenet, �s le�r�s
    jatek.setGameSettings(); // �j j�t�k be�ll�t�sainak be�ll�t�sa
    jatek.startGame(); //�j j�t�k elind�t�sa
    */
}

