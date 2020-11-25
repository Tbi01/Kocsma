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

   /* Game jatek; // új játék létrehozása

    jatek.wellcome(); //üdvözlõ üzenet, és leírás
    jatek.setGameSettings(); // új játék beállításainak beállítása
    jatek.startGame(); //új játék elindítása
    */
}

