
#include "memories.h"

#define MAX_MEMORIES 50

static BuddyMemory memories[MAX_MEMORIES];
static int memoryCount = 0;

void addMemory(
    String title,
    String description,
    String date,
    String photoPath
) {
    if (memoryCount >= MAX_MEMORIES) {
        Serial.println("Memory storage is full.");
        return;
    }

    memories[memoryCount].title = title;
    memories[memoryCount].description = description;
    memories[memoryCount].date = date;
    memories[memoryCount].photoPath = photoPath;

    memoryCount++;

    Serial.println("New memory saved.");
}

void showMemories() {
    Serial.println();
    Serial.println("======= MEMORIES =======");

    if (memoryCount == 0) {
        Serial.println("No memories saved yet.");
        return;
    }

    for (int i = 0; i < memoryCount; i++) {
        Serial.print(i + 1);
        Serial.print(". ");
        Serial.println(memories[i].title);

        Serial.println(memories[i].description);

        Serial.print("Date: ");
        Serial.println(memories[i].date);

        Serial.print("Photo: ");
        Serial.println(memories[i].photoPath);

        Serial.println("------------------------");
    }
}

int getMemoryCount() {
    return memoryCount;
}
