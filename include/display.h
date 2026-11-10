
#ifndef MANDYS_BUDDY_DISPLAY_H
#define MANDYS_BUDDY_DISPLAY_H

#include <Arduino.h>

void initializeDisplay();
void clearDisplay();
void showDisplayMessage(const String& message);
void showDisplayTitle(const String& title);
void drawHomeInterface();
void updateDisplay();

#endif
