#include "WProgram.h"
#include <stdio.h>
#include <stdlib.h>

#define TESTDELAY 50

int main(void) {
    Serial.begin(115200);
    delay(1000);
    pinMode(13, OUTPUT);
    while (1) {
        digitalWriteFast(13, HIGH);
        Serial.println("[Error] On");
        delay(TESTDELAY);
        digitalWriteFast(13, LOW);
        Serial.println("[Info] Off");
        delay(TESTDELAY);
        digitalWriteFast(13, HIGH);
        Serial.println("[Warn] On");
        delay(TESTDELAY);
        digitalWriteFast(13, LOW);
        Serial.println("[Debug] Off");
        delay(TESTDELAY);
        digitalWriteFast(13, HIGH);
        Serial.println("On");
        delay(TESTDELAY);
        digitalWriteFast(13, LOW);
        Serial.println("[INFO] Off");
        delay(TESTDELAY);
    }
}
