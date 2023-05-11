#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(D1, OUTPUT);
  pinMode(D0, INPUT);

  digitalWrite(D1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(D0) == HIGH)
    {
      digitalWrite(D1, HIGH);
    }
    else
    {
      digitalWrite(D1, LOW);
    }
}