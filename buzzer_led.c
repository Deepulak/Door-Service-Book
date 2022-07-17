int led = 13;                                    // LED connected to pin 13
int sound = 8;                                // piezo buzzer connected to pin 8

void setup()
{
   pinMode(led, OUTPUT);               // sets the LED as output
   pinMode(sound, OUTPUT);         // sets the buzzer alarm as output
}

void loop()                                         // run the program continuously
{
   digitalWrite(led, HIGH);                // turn the LED on
   tone(sound, 1000, 250);              // play a tone with 1000 Hz for 250 ms
   delay(2000);                                  // wait for 2 seconds
   digitalWrite(led, LOW);               // turn the LED off
   tone(sound, 6000, 250);             // play a tone with 6000 Hz for 250 ms
   delay(2000);                                 // wait for 2 seconds
}