
#include "notifications.h"

#define MAX_NOTIFICATIONS 30

static BuddyNotification notifications[MAX_NOTIFICATIONS];
static int notificationCount = 0;

void initializeNotifications() {
    notificationCount = 0;
    Serial.println("Notifications initialized.");
}

void addNotification(
    String title,
    String content,
    NotificationType type
) {
    if (notificationCount >= MAX_NOTIFICATIONS) {
        Serial.println("Notification storage full.");
        return;
    }

    BuddyNotification& item =
        notifications[notificationCount];

    item.title = title;
    item.content = content;
    item.type = type;
    item.isRead = false;

    notificationCount++;

    Serial.println("New notification received.");
}

void showNotifications() {
    Serial.println("======= NOTIFICATIONS =======");

    for (int i = 0; i < notificationCount; i++) {
        Serial.println(notifications[i].title);
        Serial.println(notifications[i].content);

        Serial.println(
            notifications[i].isRead ? "Read" : "Unread"
        );
    }
}

void markNotificationRead(int index) {
    if (index < 0 || index >= notificationCount) {
        return;
    }

    notifications[index].isRead = true;
}

int getNotificationCount() {
    return notificationCount;
}
