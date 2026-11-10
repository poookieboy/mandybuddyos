
#ifndef MANDYS_BUDDY_GAMES_H
#define MANDYS_BUDDY_GAMES_H

#include <Arduino.h>

enum GameType {
    NUMBER_GUESSING,
    MEMORY_CHALLENGE,
    DAILY_QUESTION
};

void showGamesMenu();
void startGame(GameType game);
void showDailyQuestion();

#endif
