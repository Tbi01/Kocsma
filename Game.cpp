#include "Game.h"

using namespace std;

Game::Game() {
    playerNumber = 0;
    cout << "jatek létrehozva" << endl;
}

Game::~Game() {
    cout << "jatek törölve" << endl;
}

void Game::wellcome() {
    cout << "Udvozollek a Kocsma kartya jatekban!" << endl;
}

void Game::setGameSettings() {
    short temp;
    cout << "Kerlek add meg, hanyan szeretnetek jatszani!\nJatekosok szama:" << endl;
    cin >> temp;
    playerNumber = temp;
}

void Game::startGame() {
    cout << "játék indul" << endl;
}
