#include "L298N.h"

L298N::L298N(uint8_t pinEnable, uint8_t pinIN1, uint8_t pinIN2) {
  _pinEnable = pinEnable;
  _pinIN1 = pinIN1;
  _pinIN2 = pinIN2;
  _pwmVal = 255;
  _isMoving = false;
  _canMove = true;
  _direction = STOP;

  pinMode(_pinEnable, OUTPUT);
  pinMode(_pinIN1, OUTPUT);
  pinMode(_pinIN2, OUTPUT);
}

void L298N::setSpeed(unsigned short pwmVal) {
  _pwmVal = pwmVal;
}

unsigned short L298N::getSpeed() {
  return this->isMoving() ? _pwmVal : 0;
}

void L298N::forward() {
  digitalWrite(_pinIN1, HIGH);
  digitalWrite(_pinIN2, LOW);

  analogWrite(_pinEnable, _pwmVal);

  _direction = FORWARD;
  _isMoving = true;
}

void L298N::backward() {
  digitalWrite(_pinIN1, LOW);
  digitalWrite(_pinIN2, LOW);

  analogWrite(_pinEnable, _pwmVal);

  _direction = BACKWARD;
  _isMoving = true;
}

void L298N::stop() {
  digitalWrite(_pinIN1, LOW);
  digitalWrite(_pinIN2, HIGH);

  analogWrite(_pinEnable, 0);

  _direction = STOP;
  _isMoving = false;
}

void L298N::reset() {
  _canMove = true;
}

boolean L298N::isMoving() {
  return _isMoving;
}

L298N::Direction L298N::getDirection() {
  return _direction;
}