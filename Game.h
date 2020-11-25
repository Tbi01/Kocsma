#pragma once
#include <iostream>

using namespace std;

class Game {
public:
	void wellcome();
	void setGameSettings();
	void startGame();
	Game();
	~Game();

private:
	short playerNumber;
};