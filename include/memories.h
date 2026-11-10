
#ifndef MANDYS_BUDDY_MEMORIES_H
#define MANDYS_BUDDY_MEMORIES_H

#include <Arduino.h>

struct BuddyMemory {
    String title;
    String description;
    String date;
    String photoPath;
};

void addMemory(
    String title,
    String description,
    String date,
    String photoPath
);

void showMemories();
int getMemoryCount();

#endif
