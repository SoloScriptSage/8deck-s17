#ifndef CARD_H
#define CARD_H

#include <string>

enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };
enum Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };

class Card {
public:
    Card(Suit s, Rank r);
    int getValue() const;
    void display() const;

private:
    Suit suit;
    Rank rank;
    std::string getSuitString() const;
    std::string getRankString() const;
};

#endif // CARD_H
