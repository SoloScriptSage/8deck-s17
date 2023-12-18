#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>

class Deck {
public:
    Deck();
    void shuffle();
    Card dealCard();
    bool isEmpty() const;

private:
    std::vector<Card> cards;
};

#endif // DECK_H
