class Light{
  private:
    int attachedPin;
    
    void write(int state)//放此處不會有被外面改的風險
  {
    digitalWrite(attachedPin, state);
  }
  public:
   Light(int pin)
  {
    attach(pin);
  }

    void attach(int pin)
    {
        attachedPin = pin;
        pinMode(attachedPin, OUTPUT);
    }

    void On(){
      write(1);
    }
    
    void Off(){
      write(0);
    }
    
};
