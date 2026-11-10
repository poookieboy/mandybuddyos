
#include "notes.h"

#define MAX_NOTES 30

static BuddyNote notes[MAX_NOTES];
static int noteCount = 0;

void addNote(String title, String content, String date) {
    if (noteCount >= MAX_NOTES) {
        Serial.println("Notes storage is full.");
        return;
    }

    notes[noteCount].title = title;
    notes[noteCount].content = content;
    notes[noteCount].date = date;

    noteCount++;

    Serial.println("Daily note saved.");
}

void showNotes() {
    Serial.println();
    Serial.println("======= DAILY NOTES =======");

    if (noteCount == 0) {
        Serial.println("No notes available.");
        return;
    }

    for (int i = 0; i < noteCount; i++) {
        Serial.print(i + 1);
        Serial.print(". ");
        Serial.println(notes[i].title);

        Serial.println(notes[i].content);
        Serial.print("Date: ");
        Serial.println(notes[i].date);
        Serial.println("---------------------------");
    }
}

int getNoteCount() {
    return noteCount;
}
