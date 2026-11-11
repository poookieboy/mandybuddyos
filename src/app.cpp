
#include "app.h"

static bool appReady = false;
static const char* APP_VERSION = "1.0.0";

void initializeApp() {
    Serial.println();
    Serial.println("==============================");
    Serial.println("      MANDY'S BUDDY OS");
    Serial.println("==============================");

    Serial.print("Version: ");
    Serial.println(APP_VERSION);

    Serial.println("Starting application...");

    appReady = true;

    Serial.println("Application initialized.");
}

void updateApp() {
    if (!appReady) {
        return;
    }

    // Application update tasks will be connected here.
}

void shutdownApp() {
    if (!appReady) {
        return;
    }

    Serial.println("Shutting down Mandy's Buddy OS...");

    appReady = false;

    Serial.println("Application stopped.");
}

bool isAppReady() {
    return appReady;
}

String getAppVersion() {
    return String(APP_VERSION);
}
