
#include <Arduino.h>
#include "config.h"
#include "ui.h"

void setup() {
    Serial.begin(SERIAL_BAUD_RATE);
    delay(1000);

    Serial.println("Starting system...");
    Serial.println(DEVICE_NAME);
    Serial.println(DEVELOPER_NAME);
    Serial.println("Version: " SOFTWARE_VERSION);

    showWelcomeScreen();
    delay(2000);

    showHomeScreen();
}

void loop() {
    updateClock();
    updateBuddyFace();

    delay(1000);
}
