# Ardunio Boilerplate

Pin Input/Output
Digital I/O - pins 0-13 A0-A5
 pinMode(pin,
 {INPUT|OUTPUT|INPUT_PULLUP})
 int digitalRead(pin)
 digitalWrite(pin, {HIGH|LOW})
Analog In - pins A0-A5
 int analogRead(pin)
 analogReference(
 {DEFAULT|INTERNAL|EXTERNAL})
PWM Out - pins 3 5 6 9 10 11
 analogWrite(pin, value) // 0-255
Advanced I/O
tone(pin, freq_Hz, [duration_msec])
noTone(pin)
shiftOut(dataPin, clockPin,
 {MSBFIRST|LSBFIRST}, value)
shiftIn(dataPin, clockPin,
 {MSBFIRST|LSBFIRST})
unsigned long pulseIn(pin,
 {HIGH|LOW}, [timeout_usec])
Time
unsigned long millis()
 // Overflows at 50 days
unsigned long micros()
 // Overflows at 70 minutes
delay(msec)
delayMicroseconds(usec)
Math
min(x, y) max(x, y) abs(x)
sin(rad) cos(rad) tan(rad)
sqrt(x) pow(base, exponent)
constrain(x, minval, maxval)
map(val, fromL, fromH, toL, toH)
Random Numbers
randomSeed(seed) // long or int
long random(max) // 0 to max-1
long random(min, max)
Type Conversions
char(val) byte(val)
int(val) word(val)
long(val) float(val)
External Interrupts
attachInterrupt(interrupt, func,
{LOW|CHANGE|RISING|FALLING})
detachInterrupt(interrupt)
interrupts()
noInterrupts()
