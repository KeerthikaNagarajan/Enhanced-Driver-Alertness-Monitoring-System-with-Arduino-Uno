// Define the pin for the eye blink sensor
const int eyeBlinkSensorPin = 2;
// Define the pin for the buzzer
const int buzzerPin = 3;

void setup() {
  // Initialize the eye blink sensor pin as an input
  pinMode(eyeBlinkSensorPin, INPUT);
  // Initialize the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Read the state of the eye blink sensor
  int blinkState = digitalRead(eyeBlinkSensorPin);

  // If the eye is closed (blinkState is LOW), activate the buzzer
  if (blinkState == LOW) {
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
  } else {
    digitalWrite(buzzerPin, LOW); // Turn off the buzzer
  }
}
