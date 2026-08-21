// Pin definitions
const int trigPin = 9;
const int echoPin = 10;
const int greenLED = 2;
const int yellowLED = 5;
const int redLED = 7;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  Serial.begin(9600); // optional, for debugging
}

void loop() {
  // Send trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo pulse duration
  duration = pulseIn(echoPin, HIGH);

  // Convert to distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // Turn off all LEDs first
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

  // Decide which LED to light based on distance
  if (distance > 30) {
    digitalWrite(greenLED, HIGH);   // Far away - safe
  } 
  else if (distance > 10) {
    digitalWrite(yellowLED, HIGH);  // Getting close
  } 
  else {
    digitalWrite(redLED, HIGH);     // Very close - stop!
  }

  delay(200); // small pause before next reading
}
