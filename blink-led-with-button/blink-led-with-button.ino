// Declare variables for the hardware pins
int ledPin = 12;    // The LED is connected to digital pin 12
int buttonPin = 2;  // The push button is connected to digital pin 2

void setup() {
  // Initialize the pins as inputs or outputs
  pinMode(ledPin, OUTPUT);   // Set the LED pin as an output
  pinMode(buttonPin, INPUT); // Set the button pin as an input
}

void loop() {
  // Continuously check the state of the button
  if (digitalRead(buttonPin) == HIGH) {
    // If the button is pressed (reads HIGH voltage), turn the LED on
    digitalWrite(ledPin, HIGH);
  } 
  else {
    // If the button is not pressed (reads LOW voltage), turn the LED off
    digitalWrite(ledPin, LOW);
  }
}