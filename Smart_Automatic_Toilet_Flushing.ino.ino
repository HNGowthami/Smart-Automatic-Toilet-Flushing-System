#include <Servo.h>

Servo flushServo;

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

long duration;
int distance;

int getDistance()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  return distance;
}

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  flushServo.attach(servoPin);
  flushServo.write(0);

  Serial.begin(9600);
}

void loop()
{
  distance = getDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 50)
  {
    delay(3000);

    int newDistance = getDistance();

    if (newDistance > 50)
    {
      flushServo.write(90);
      delay(1000);

      flushServo.write(0);
      delay(2000);
    }
  }

  delay(500);
}