#ifndef L298N_h
#define L298N_h

#include "Arduino.h"

class L298N {
  public:
    typedef enum
    {
        FORWARD = 0,
        BACKWARD = 1,
        STOP = -1
    } Direction;

    L298N(uint8_t pinEnable, uint8_t pinIN1, uint8_t pinIN2);
    void setSpeed(unsigned short pwmVal);
    unsigned short getSpeed();
    void forward();
    void backward();
    void stop();
    void reset();
    boolean isMoving();
    Direction getDirection();

  private:
    byte _pinEnable;
    byte _pinIN1;
    byte _pinIN2;
    byte _pwmVal;
    boolean _canMove;
    boolean _isMoving;
    L298N::Direction _direction;
};

#endif