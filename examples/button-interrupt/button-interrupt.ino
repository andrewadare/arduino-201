#define BUTTON_PIN 2;
#define LED_PIN 13;

volatile uint8_t pinState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), toggle, CHANGE);
}

void loop() {
  digitalWrite(LED_PIN, pinState);
}

void toggle() {
  pinState = !pinState;
}