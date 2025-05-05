#include <Arduino.h>
#include <Servo.h>

Servo treeServo;

const int buzzerPin = 8;
const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;


// Provide LED to light, the start/end degree for the servo, and frequency
// of tone generate by the passive buzzer.
void tree(int colorPin,int startDegree, int endDegree, int freq) {
    digitalWrite(colorPin, HIGH);
    delay(200);
    tone(buzzerPin, freq);

    for (int p = startDegree; p < endDegree; ++p) {
        treeServo.write(p);
        delay(20);
    }

    digitalWrite(colorPin, LOW);
    noTone(buzzerPin);
}

void setup() {
    treeServo.attach(9);
    pinMode(buzzerPin, OUTPUT);
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    treeServo.write(0);
    tree(redPin, 1, 90, 400);       // Red Pin.
    tree(yellowPin, 90, 180, 880);  // Yellow Pin.

    // Green Pin.
    digitalWrite(greenPin, HIGH);
    tone(buzzerPin, 1320);
    treeServo.write(180);
    delay(5000);

    // Off.
    digitalWrite(greenPin, LOW);
    noTone(buzzerPin);

    // Reset.
    treeServo.write(0);
    delay(5000);
}