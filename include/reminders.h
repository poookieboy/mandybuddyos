
#ifndef MANDYS_BUDDY_REMINDERS_H
#define MANDYS_BUDDY_REMINDERS_H

#include <Arduino.h>

struct BuddyReminder {
    String title;
    String description;
    String date;
    String time;
    bool completed;
};

void initializeReminders();

void addReminder(
    String title,
    String description,
    String date,
    String time
);

void showReminders();
void completeReminder(int index);
int getReminderCount();

#endif
