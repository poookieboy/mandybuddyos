
#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println();
    Serial.println("==============================");
    Serial.println("       MANDY'S BUDDY");
    Serial.println("       by EZEN UEL Studios");
    Serial.println("==============================");
    Serial.println("System starting...");
    Serial.println("Welcome, Mandy!");
}

void loop() {
    Serial.println("Mandy's Buddy is running.");
    delay(5000);
}
