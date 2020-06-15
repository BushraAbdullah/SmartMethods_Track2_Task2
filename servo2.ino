#include <Servo.h>

Servo motor1;
Servo motor2;
int x=0,y=0;
int a=0,b=0;
void setup() {
  // put your setup code here, to run once:


motor1.attach(2);
motor2.attach(4);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(A0);
y=analogRead(A2);
a=map(x,0,1023,15,165);
b=map(y,0,1023,15,165);
Serial.print(x); 
Serial.print(y);
Serial.print("  ");
Serial.print(a);
Serial.print(b);
motor1.write(a);
motor2.write(b);



}
