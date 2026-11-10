
#include "messages.h"

#define MAX_MESSAGES 30

static BuddyMessage messages[MAX_MESSAGES];
static int messageCount = 0;

void addMessage(String sender, String content, String date) {
    if (messageCount >= MAX_MESSAGES) {
        Serial.println("Message storage is full.");
        return;
    }

    messages[messageCount].sender = sender;
    messages[messageCount].content = content;
    messages[messageCount].date = date;
    messages[messageCount].isRead = false;

    messageCount++;

    Serial.println("New message saved.");
}

void showMessages() {
    Serial.println();
    Serial.println("======= MESSAGES =======");

    if (messageCount == 0) {
        Serial.println("No messages yet.");
        return;
    }

    for (int i = 0; i < messageCount; i++) {
        Serial.print(i + 1);
        Serial.print(". From: ");
        Serial.println(messages[i].sender);

        Serial.print("Message: ");
        Serial.println(messages[i].content);

        Serial.print("Date: ");
        Serial.println(messages[i].date);

        Serial.println(
            messages[i].isRead ? "Read" : "Unread"
        );
    }

    Serial.println("========================");
}

void markMessageAsRead(int index) {
    if (index < 0 || index >= messageCount) {
        return;
    }

    messages[index].isRead = true;
}

int getMessageCount() {
    return messageCount;
}
