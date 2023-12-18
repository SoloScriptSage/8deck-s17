#include "Player.h"
#include <iostream>

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

int Player::getHandValue() const {
    int value = 0;
    int numAces = 0;

    for (const Card& card : hand) {
        value += card.getValue();
        if (card.getValue() == ACE) {
            numAces++;
        }
    }

    while (numAces > 0 && value + 10 <= 21) {
        value += 10;
        numAces--;
    }

    return value;
}

void Player::displayHand() const {
    std::cout << "Hand: | ";
    for (const Card& card : hand) {
        card.display();
        std::cout << " | ";
    }
    std::cout << "(" << getHandValue() << " points)" << std::endl;
}

void Player::displayPartialHand() const {
    std::cout << "Hand: | ";
    if (!hand.empty()) {
        hand.front().display();
        std::cout << " | (hidden) | ";
    }
    std::cout << "(" << getHandValue() << " points)" << std::endl;
}

void Player::clearHand() {
    hand.clear();
}
