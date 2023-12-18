#include "Deck.h"
#include <algorithm>
#include <random>
#include <iostream>

Deck::Deck() {
    for (int s = HEARTS; s <= SPADES; ++s) {
        for (int r = ACE; r <= KING; ++r) {
            cards.push_back(Card(static_cast<Suit>(s), static_cast<Rank>(r)));
        }
    }
}

void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::dealCard() {
    Card dealtCard = cards.back();
    cards.pop_back();
    return dealtCard;
}

bool Deck::isEmpty() const {
    return cards.empty();
}
