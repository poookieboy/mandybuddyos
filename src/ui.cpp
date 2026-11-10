
#include "ui.h"
#include "config.h"

void showWelcomeScreen() {
    Serial.println();
    Serial.println("================================");
    Serial.println("          MANDY'S BUDDY");
    Serial.println("       A little friend,");
    Serial.println("       always by your side.");
    Serial.println("================================");
}

void showHomeScreen() {
    Serial.println();
    Serial.println("---------- HOME ----------");
    Serial.println("Hello, Mandy!");
    Serial.println("Your Buddy is here.");
    Serial.println("1. Messages");
    Serial.println("2. Daily Notes");
    Serial.println("3. Memories");
    Serial.println("4. Mini Games");
    Serial.println("5. Settings");
    Serial.println("--------------------------");
}

void updateClock() {
    // Clock implementation will be added with the RTC.
}

void updateBuddyFace() {
    // Animated face implementation will be added with the display.
}
