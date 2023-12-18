# 8deck-s17

## Disclaimer

⚠️ **Attention Users:** ⚠️

This project is intended for `educational` and `personal` purposes only. The developer(s) **do not endorse, encourage, or support** any form of `cheating` or `unauthorized manipulation` of games, applications, or any other software. The use of this software for any activities that violate the `terms of service` or `user agreements` of relevant platforms is **strictly prohibited**.

**❗Legal and Ethical Implications❗**

The use of cheats, hacks, or any tools that manipulate or exploit games may be a violation of the law and can result in severe consequences, including legal action. Engaging in such activities can lead to account bans, financial penalties, and other legal actions by the affected parties. It's crucial to be aware of and comply with the laws and regulations governing the use of software, games, and online platforms.

**❗ No Responsibility ❗**

The developer(s) shall **not be held responsible** for any **losses, consequences, or legal actions** resulting from the use or misuse of this software. Users are solely responsible for their actions and are advised to consult with legal professionals to ensure compliance with all relevant laws and regulations. It is the user's responsibility to understand and adhere to the legal implications of using this software.

**❗Agreement❗**

By using this software, you **agree** to the terms outlined in this disclaimer, including the understanding that the developer(s) are not liable for any legal or financial consequences arising from the use of this software.
#
# 
Blackjack Game with Basic Strategy Implementation 🃏

Welcome to the console-based implementation of the classic Blackjack game in C++! This project showcases the application of basic Blackjack strategy principles, allowing players to experience optimal decision-making during gameplay.

## Basic Strategy Implementation 📚

The implementation includes a set of rules representing basic Blackjack strategy. This strategy guides the game's decisions, determining when to hit, stand, or double down based on the player's hand and the dealer's upcard.

## Features 🎮

- Multiple decks support (4, 6, or 8 decks).
- Player actions: Hit, Stand, and Double Down.
- Automatic reshuffling of the deck.
- Display of the current balance.
- Player and dealer hands tracking.

## How to Play 🕹️

1. Run the program.
2. Enter the number of decks to use (4, 6, or 8).
3. Follow the on-screen instructions to play the game, observing the basic strategy decisions.

## Project Structure 🏗️

- **Card:** Represents a playing card.
- **Deck:** Represents a deck of cards.
- **Shoe:** Represents a shoe containing multiple decks.
- **Player:** Represents a player in the game.
- **BlackjackGame:** Implements the core logic of the Blackjack game with basic strategy considerations.

## Basic Strategy Principles 🧠

- Stand on hard totals of 17 and higher.
- Always hit on hard totals of 11 or lower.
- Double down on hard totals of 10 or 11 if the dealer has a favorable upcard.
- ...

## Usage ⌨️

```bash
g++ main.cpp Card.cpp Deck.cpp Shoe.cpp Player.cpp BlackjackGame.cpp -o blackjack
./blackjack
