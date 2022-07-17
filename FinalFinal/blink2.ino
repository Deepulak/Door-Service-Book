/* Blink 
 *  Turns on an LED on for one second, then off for one second, repeatedly
 *  
 *  This example code is in the public domain
 */

// Pin 13 has an LED connected on most arduino board
// give it a name
int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
