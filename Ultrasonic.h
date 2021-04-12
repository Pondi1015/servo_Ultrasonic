class UltraSonic
{
private:
  int trigPin;
  int echoPin;
public:
  UltraSonic(int _trigPin, int _echoPin)
  {
    trigPin = _trigPin;
    echoPin = _echoPin;
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
  }

  long getDistance()
  {
    long duration, cm;
    
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
  
    pinMode(echoPin, INPUT);
    duration = pulseIn(echoPin, HIGH);
   
    cm = (duration/2) / 29.1;
    Serial << "Distance : " << cm << "cm." << "\n";
    return cm;
  }
};
