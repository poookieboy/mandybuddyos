
#include "storage.h"
#include <SPI.h>
#include <SD.h>

static bool storageReady = false;

bool initializeStorage() {
    Serial.println("Initializing SD card...");

    storageReady = SD.begin();

    if (!storageReady) {
        Serial.println("SD card initialization failed.");
        return false;
    }

    Serial.println("SD card ready.");
    return true;
}

bool saveTextFile(
    const char* filename,
    const String& content
) {
    if (!storageReady) return false;

    if (SD.exists(filename)) {
        SD.remove(filename);
    }

    File file = SD.open(filename, FILE_WRITE);

    if (!file) return false;

    file.print(content);
    file.close();

    return true;
}

String readTextFile(const char* filename) {
    if (!storageReady) return "";

    File file = SD.open(filename, FILE_READ);

    if (!file) return "";

    String content = file.readString();
    file.close();

    return content;
}

bool deleteFile(const char* filename) {
    if (!storageReady) return false;

    if (!SD.exists(filename)) return false;

    return SD.remove(filename);
}

bool fileExists(const char* filename) {
    if (!storageReady) return false;

    return SD.exists(filename);
}
