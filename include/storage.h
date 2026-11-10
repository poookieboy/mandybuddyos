
#ifndef MANDYS_BUDDY_STORAGE_H
#define MANDYS_BUDDY_STORAGE_H

#include <Arduino.h>

bool initializeStorage();

bool saveTextFile(
    const char* filename,
    const String& content
);

String readTextFile(const char* filename);

bool deleteFile(const char* filename);

bool fileExists(const char* filename);

#endif
