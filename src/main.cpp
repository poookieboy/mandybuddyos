
#include <Arduino.h>
#include "app.h"

void setup() {
    Serial.begin(115200);
    delay(500);

    Serial.println();
    Serial.println("Booting Mandy's Buddy OS...");

    initializeApp();
}

void loop() {
    updateApp();
    delay(10);
}
