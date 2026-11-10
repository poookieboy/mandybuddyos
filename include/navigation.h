
#ifndef MANDYS_BUDDY_NAVIGATION_H
#define MANDYS_BUDDY_NAVIGATION_H

#include <Arduino.h>

enum Screen {
    SCREEN_HOME,
    SCREEN_MESSAGES,
    SCREEN_NOTES,
    SCREEN_MEMORIES,
    SCREEN_GAMES,
    SCREEN_SETTINGS
};

void initializeNavigation();
void navigateTo(Screen screen);
Screen getCurrentScreen();
void goHome();
void goBack();

#endif
