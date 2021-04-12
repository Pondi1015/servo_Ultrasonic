#include "Light.h"
#include "Door.h"
#include <Streaming.h>
#include "Ultrasonic.h"


int trigPin = 12;
int echoPin = 11;    

UltraSonic ultrasonic(trigPin, echoPin);
Door door;

void setup() {
  Serial.begin(9600);
  door.attach(9);
}

void loop() {
  if(ultrasonic.getDistance()<50){
    door.unLock();
  }
  else{
    door.Lock();
  }
}
//----------------------------------------------------------------------
void initUltraSonic(int trigPin, int echoPin)
{
  pinMode(trigPin, OUTPUT);        // 定義輸入及輸出 
  pinMode(echoPin, INPUT);  
}

  
