#include <Servo.h>
class Door
{
private:
  int attachedPin;
  Servo myservo;

public:
  void attach(int pin)//任何的pin腳都通用(1、2、3等等)
    {
      attachedPin = pin;
      myservo.attach(attachedPin);
      unLock();
    }

   void Lock()
  {
    myservo.write(0);
    delay(500);
  }

  void unLock()
  {
    myservo.write(90);
    delay(500);
  }


};
