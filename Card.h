#pragma once
#include <iostream>

using namespace std;

class Card {
public:
    int getValue();
    char getMark();
    Card(int value, char mark);
    ~Card();

private:
    int value;
    char mark;
};