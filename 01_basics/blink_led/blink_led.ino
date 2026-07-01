/*
 * Blink LED - Enhanced Version
 * Embedded Systems Lab - 01_basics
 * 
 * Demonstrates digital output with non-blocking timing using millis()
 */

const int LED_PIN = 13;           // Most Arduino boards have built-in LED on pin 13
unsigned long previousMillis = 0;
const long interval = 1000;       // Blink interval (ms)

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);             // For debugging
  Serial.println("Blink LED Started - Enhanced Version");
}

void loop() {
  unsigned long currentMillis = millis();

  // Non-blocking blink
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // Toggle LED
    static bool ledState = false;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);

    Serial.print("LED State: ");
    Serial.println(ledState ? "ON" : "OFF");
  }
}void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
