#include "BlackjackGame.h"
#include <iostream>

BlackjackGame::BlackjackGame(int numDecks) : shoe(numDecks), balance(1000) {}

void BlackjackGame::playGame() {
    player.clearHand();
    dealer.clearHand();

    // Check if the shoe needs to be reshuffled
    if (shoe.isEmpty()) {
        shoe.shuffle();
        std::cout << "Reshuffling the shoe." << std::endl;
    }

    displayBalance();
    dealInitialCards();
    playerTurn();
    dealerTurn();
    determineWinner();
    displayBalance();
    askToPlayAgain();
}

int BlackjackGame::getDealerTotal() const {
    return dealer.getHandValue();
}

int BlackjackGame::getPlayerTotal() const {
    return player.getHandValue();
}

void BlackjackGame::dealInitialCards() {
    player.addCard(shoe.dealCard());
    dealer.addCard(shoe.dealCard());

    player.addCard(shoe.dealCard());

    std::cout << "YOU: ";
    player.displayHand();
    std::cout << "D: ";
    dealer.displayPartialHand();
}

void BlackjackGame::playerTurn() {
    char choice;

    do {
        std::cout << "Do you want to hit (h) or stand (s)? ";
        std::cin >> choice;

        if (choice == 'h') {
            player.addCard(shoe.dealCard());
            std::cout << "Player's ";
            player.displayHand();
        }

    } while (choice == 'h' && player.getHandValue() < 21);
}

void BlackjackGame::dealerTurn() {
    dealer.displayPartialHand();

    while (dealer.getHandValue() < 17) {
        dealer.addCard(shoe.dealCard());
        std::cout << "Dealer hits." << std::endl;
        dealer.displayPartialHand();
    }

    std::cout << "Dealer stands with a total of " << dealer.getHandValue() << " points." << std::endl;
}

void BlackjackGame::determineWinner() {
    int playerValue = getPlayerTotal();
    int dealerValue = getDealerTotal();

    std::cout << "Player has " << playerValue << " points. Dealer has " << dealerValue << " points." << std::endl;

    if (playerValue > 21 || (dealerValue <= 21 && dealerValue >= playerValue)) {
        std::cout << "Dealer wins!" << std::endl;
        balance -= 10;
    }
    else {
        std::cout << "Player wins!" << std::endl;
        balance += 10;
    }
}

void BlackjackGame::displayBalance() const {
    std::cout << "Current balance: $" << balance << std::endl;
}

void BlackjackGame::askToPlayAgain() {
    char choice;
    std::cout << "Do you want to play again? (y/n): ";
    std::cin >> choice;

    if (choice == 'y') {
        playGame();
    }
    else {
        std::cout << "Thanks for playing! Your final balance is: $" << balance << std::endl;
    }
}
