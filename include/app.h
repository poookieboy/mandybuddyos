#ifndef APP_H
#define APP_H

#include <Arduino.h>

void initializeApp();
void updateApp();
void shutdownApp();
bool isAppReady();
String getAppVersion();

#endif
