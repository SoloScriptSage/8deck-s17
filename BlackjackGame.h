#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

#include "Shoe.h"
#include "Player.h"

class BlackjackGame {
public:
    BlackjackGame(int numDecks);
    void playGame();
    int getDealerTotal() const;
    int getPlayerTotal() const;

private:
    Shoe shoe;
    Player player;
    Player dealer;
    int balance;

    void dealInitialCards();
    void playerTurn();
    void dealerTurn();
    void determineWinner();
    void displayBalance() const;
    void askToPlayAgain();
};

#endif
