void setup() {
  // Configure digital pins 12 and 8 as outputs
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // Turn LED on pin 12 ON and LED on pin 8 OFF
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1 second (1000 milliseconds)

  // Turn LED on pin 12 OFF and LED on pin 8 ON
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1 second
}