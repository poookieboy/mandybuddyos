
#ifndef MANDYS_BUDDY_NOTIFICATIONS_H
#define MANDYS_BUDDY_NOTIFICATIONS_H

#include <Arduino.h>

enum NotificationType {
    NOTIFICATION_MESSAGE,
    NOTIFICATION_REMINDER,
    NOTIFICATION_SYSTEM
};

struct BuddyNotification {
    String title;
    String content;
    NotificationType type;
    bool isRead;
};

void initializeNotifications();

void addNotification(
    String title,
    String content,
    NotificationType type
);

void showNotifications();
void markNotificationRead(int index);
int getNotificationCount();

#endif
