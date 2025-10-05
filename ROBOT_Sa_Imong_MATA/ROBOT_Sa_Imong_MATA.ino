#include <Servo.h>

#define TRIG_PIN 9
#define ECHO_PIN 10
#define SERVO_PIN A0

#define Center_Servo_Angle 90
#define Left_Servo_Angle 0
#define Left_Center_Servo_Angle 40
#define Right_Center_Servo_Angle 140
#define Right_Servo_Angle 180

Servo myservo;

void Sensor_Tester(char* sensor) {
  if (strcmp(sensor, "servo") == 0) {
    Serial.println("Testing Servo...");

    myservo.write(Center_Servo_Angle);
    delay(500);
    myservo.write(Right_Servo_Angle);
    delay(500);
    myservo.write(Right_Center_Servo_Angle);
    delay(500);
    myservo.write(Left_Center_Servo_Angle);
    delay(500);
    myservo.write(Left_Servo_Angle);
    delay(500);
    myservo.write(Center_Servo_Angle);

    Serial.println("✅ Done! Servo test complete.");
  }
  else if (strcmp(sensor, "ultrasonic") == 0) {
    Serial.println("Testing Ultrasonic (HC-SR04)...");
    // Add ultrasonic test here later
  }
  else if (strcmp(sensor, "motors") == 0) {
    Serial.println("Testing DC Motors...");
    // Add motor test here later
  }
  else if (strcmp(sensor, "infrared") == 0) {
    Serial.println("Testing Infrared Sensor...");
    // Add IR test here later
  }
  else {
    Serial.println("Unknown sensor name!");
  }
}

void setup() {
  Serial.begin(115200);
  delay(50);

  myservo.attach(SERVO_PIN);
  delay(500);

  Sensor_Tester("servo");
}

void loop() {
  // empty
}
