#include <Servo.h>
Servo servomotor;
int pos;
int  trigpin = 8;
int echopin = 9;
float duration;
float distance;

void setup()
{

  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  servomotor.attach(3);
}

void loop() {
  float dist(); {
    digitalWrite(8, LOW);
    delay(100);
    digitalWrite(8, HIGH);
    delay(100);
    digitalWrite(8, LOW);
    duration = pulseIn(9, HIGH);
    distance = 0.034 * duration / 2.0;
    Serial.println("Distance: " + String(distance));
    return (distance);


  }
  for (pos = 0; pos <= 120; pos++) {
    servomotor.write(pos);
    dist();
    delay(15);
  }
  for (pos = 120; pos >= 0; pos--) {
    servomotor.write(pos);
    dist();
    delay(15);

  }
  delay(1000);
}
