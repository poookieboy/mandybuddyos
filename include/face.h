
#ifndef MANDYS_BUDDY_FACE_H
#define MANDYS_BUDDY_FACE_H

#include <Arduino.h>

enum BuddyMood {
    HAPPY,
    SLEEPY,
    EXCITED,
    THINKING,
    NEUTRAL
};

void initializeFace();
void updateFace();
void setMood(BuddyMood mood);
BuddyMood getMood();

#endif
