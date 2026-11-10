
#include "navigation.h"

static Screen currentScreen = SCREEN_HOME;
static Screen previousScreen = SCREEN_HOME;

void initializeNavigation() {
    currentScreen = SCREEN_HOME;
    previousScreen = SCREEN_HOME;

    Serial.println("Navigation initialized.");
}

void navigateTo(Screen screen) {
    previousScreen = currentScreen;
    currentScreen = screen;

    Serial.print("Navigated to: ");

    switch (currentScreen) {
        case SCREEN_HOME:
            Serial.println("Home");
            break;

        case SCREEN_MESSAGES:
            Serial.println("Messages");
            break;

        case SCREEN_NOTES:
            Serial.println("Notes");
            break;

        case SCREEN_MEMORIES:
            Serial.println("Memories");
            break;

        case SCREEN_GAMES:
            Serial.println("Games");
            break;

        case SCREEN_SETTINGS:
            Serial.println("Settings");
            break;
    }
}

Screen getCurrentScreen() {
    return currentScreen;
}

void goHome() {
    navigateTo(SCREEN_HOME);
}

void goBack() {
    Screen destination = previousScreen;
    previousScreen = currentScreen;
    currentScreen = destination;

    Serial.println("Returned to previous screen.");
}
