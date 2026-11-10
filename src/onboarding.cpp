
#include "onboarding.h"

static bool onboardingComplete = false;

void initializeOnboarding() {
    Serial.println("Initializing Mandy's Buddy onboarding...");
}

void showOnboarding() {
    Serial.println();
    Serial.println("==============================");
    Serial.println("      MANDY'S BUDDY");
    Serial.println("==============================");
    Serial.println("Welcome!");
    Serial.println("Let's get your Buddy ready.");
    Serial.println("Setup will be available on the touchscreen.");
}

void showWelcomeMessage() {
    Serial.println("Hello, Mandy!");
    Serial.println("Your Buddy is ready to meet you.");
}

void completeOnboarding() {
    onboardingComplete = true;
    Serial.println("Onboarding completed.");
}

bool isOnboardingComplete() {
    return onboardingComplete;
}
