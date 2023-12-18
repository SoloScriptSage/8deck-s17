#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>

class Player {
public:
    void addCard(const Card& card);
    int getHandValue() const;
    void displayHand() const;
    void displayPartialHand() const;
    void clearHand();

private:
    std::vector<Card> hand;
};

#endif // PLAYER_H
