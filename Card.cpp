#include "Card.h"

using namespace std;

Card::Card(int value_, char mark_  ) {
    this->value = value_;
    this->mark = mark_;
}

Card::~Card(void) {
}

int Card::getValue() {
    return value;
}

char Card::getMark() {
    return mark;
}