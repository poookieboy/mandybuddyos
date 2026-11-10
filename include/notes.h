
#ifndef MANDYS_BUDDY_NOTES_H
#define MANDYS_BUDDY_NOTES_H

#include <Arduino.h>

struct BuddyNote {
    String title;
    String content;
    String date;
};

void addNote(String title, String content, String date);
void showNotes();
int getNoteCount();

#endif
