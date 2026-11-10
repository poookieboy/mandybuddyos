
#ifndef MANDYS_BUDDY_MESSAGES_H
#define MANDYS_BUDDY_MESSAGES_H

#include <Arduino.h>

struct BuddyMessage {
    String sender;
    String content;
    String date;
    bool isRead;
};

void addMessage(String sender, String content, String date);
void showMessages();
void markMessageAsRead(int index);
int getMessageCount();

#endif
