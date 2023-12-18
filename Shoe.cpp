#include "Shoe.h"
#include <algorithm>

Shoe::Shoe(int numDecks) {
    for (int i = 0; i < numDecks; ++i) {
        shoe.push_back(Deck());
    }
    shuffle();
}

void Shoe::shuffle() {
    std::random_shuffle(shoe.begin(), shoe.end());
    for (Deck& deck : shoe) {
        deck.shuffle();
    }
}

Card Shoe::dealCard() {
    if (!shoe.empty()) {
        Card dealtCard = shoe.back().dealCard();
        if (shoe.back().isEmpty()) {
            shoe.pop_back();
        }
        return dealtCard;
    }
    else {
        return Card(static_cast<Suit>(-1), static_cast<Rank>(-1));
    }
}

bool Shoe::isEmpty() const {
    return shoe.empty();
}
