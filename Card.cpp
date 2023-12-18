#include "Card.h"
#include <iostream>

Card::Card(Suit s, Rank r) : suit(s), rank(r) {}

int Card::getValue() const {
    return (rank > 10) ? 10 : rank;
}

void Card::display() const {
    std::cout << getRankString() << " of " << getSuitString();
}

std::string Card::getSuitString() const {
    static const char* suitStrings[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    return suitStrings[suit];
}

std::string Card::getRankString() const {
    static const char* rankStrings[] = { "Ace", "Two", "Three", "Four", "Five", "Six",
                                         "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    return rankStrings[rank - 1];
}
