#ifndef SHOE_H
#define SHOE_H

#include "Deck.h"
#include <vector>

class Shoe {
public:
    Shoe(int numDecks);
    void shuffle();
    Card dealCard();
    bool isEmpty() const;

private:
    std::vector<Deck> shoe;
};

#endif // SHOE_H
