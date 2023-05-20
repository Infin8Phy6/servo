// C++ code
//
#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);

  pos = 0;
  while (pos <= 179) {
    servo_9.write(pos);
    delay(1000); // Wait for 1000 millisecond(s)
    pos += 1;
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}