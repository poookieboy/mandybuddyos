
#include "audio.h"

static int currentVolume = 50;
static bool audioReady = false;

void initializeAudio() {
    audioReady = false;

    Serial.println("Initializing audio system...");
    Serial.println("Speaker configuration pending.");
}

void playNotification() {
    if (!audioReady) {
        Serial.println("Audio hardware not configured yet.");
        return;
    }

    Serial.println("Playing notification...");
}

void playSound(int frequency, int duration) {
    if (!audioReady) {
        Serial.println("Audio hardware not configured yet.");
        return;
    }

    if (frequency <= 0 || duration <= 0) {
        return;
    }

    Serial.println("Playing sound...");
}

void setVolume(int volume) {
    currentVolume = constrain(volume, 0, 100);

    Serial.print("Volume set to: ");
    Serial.println(currentVolume);
}

void stopAudio() {
    Serial.println("Audio stopped.");
}

