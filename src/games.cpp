
#include "games.h"

void showGamesMenu() {
    Serial.println();
    Serial.println("======= MINI GAMES =======");
    Serial.println("1. Number Guessing");
    Serial.println("2. Memory Challenge");
    Serial.println("3. Daily Question");
    Serial.println("==========================");
}

void startGame(GameType game) {
    Serial.println();
    Serial.println("Starting game...");

    switch (game) {
        case NUMBER_GUESSING:
            Serial.println("NUMBER GUESSING");
            Serial.println("Guess a number between 1 and 10!");
            break;

        case MEMORY_CHALLENGE:
            Serial.println("MEMORY CHALLENGE");
            Serial.println("Remember: BLUE, STAR, MOON");
            break;

        case DAILY_QUESTION:
            showDailyQuestion();
            break;

        default:
            Serial.println("Game not found.");
            break;
    }
}

void showDailyQuestion() {
    Serial.println();
    Serial.println("======= DAILY QUESTION =======");
    Serial.println("What is one thing that made");
    Serial.println("you happy today?");
    Serial.println("==============================");
}
