int potPin = A0;   // Potentiometer connected to analog pin A0
int ledPin = 8;    // LED connected to digital pin 8

void setup() {
  pinMode(ledPin, OUTPUT);   // Configure LED pin as an output
}

void loop() {
  int potValue = analogRead(potPin);  // Read potentiometer value (0–1023)

  if (potValue > 500) {
    digitalWrite(ledPin, HIGH);       // Turn LED ON
  } else {
    digitalWrite(ledPin, LOW);        // Turn LED OFF
  }

  delay(100);                         // Wait 100 milliseconds
}