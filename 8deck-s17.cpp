#include "BlackjackGame.h"
#include <iostream>

using namespace std;

int main() {
    int numDecks;

    do {
        cout << "Enter the number of decks (4, 6, or 8): ";
        cin >> numDecks;
    } while (numDecks != 4 && numDecks != 6 && numDecks != 8);

    BlackjackGame blackjackGame(numDecks);
    blackjackGame.playGame();

    return 0;
}
