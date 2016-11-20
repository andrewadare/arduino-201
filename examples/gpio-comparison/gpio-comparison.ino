// Compare time taken by digitalRead vs. a direct AVR register read for the same pin.

#define TEST_PIN 4 // PD4

uint16_t start = 0, end = 0;

void setup()
{
  Serial.begin(115200);

  // Wait for serial port to connect
  while (!Serial) {}
  Serial.println();

  // Time 10k digitalRead calls
  start = micros();
  for (int i=0; i<10000; i++)
  {
    digitalRead(PD4);
  }
  end = micros();

  Serial.print("Time (us) for 10000 digitalRead calls: ");
  Serial.println(end - start); // 22640 us

  // Time 10k AVR PIND register reads
  start = micros();
  for (int i=0; i<10000; i++)
  {
    PIND & (1 << PD4); // AVR equivalent to digitalRead(4)
  }
  end = micros();

  Serial.print("Time (us) for 10000 AVR PIND register reads: ");
  Serial.println(end - start); // 3448 us

  pinMode(TEST_PIN, OUTPUT);
  // Time 10k digitalWrite calls
  start = micros();
  for (int i=0; i<10000; i++)
  {
    digitalWrite(TEST_PIN, HIGH);
  }
  end = micros();

  Serial.print("\nTime (us) for 10000 digitalWrite calls: ");
  Serial.println(end - start); // 22640 us

  // Time 10k AVR PIND register writes
  start = micros();
  for (int i=0; i<10000; i++)
  {
    PORTD |= (1 << PD4); // AVR equivalent to digitalRead(4)
  }
  end = micros();

  Serial.print("Time (us) for 10000 AVR PIND register writes: ");
  Serial.println(end - start); // 3448 us
}

void loop()
{
  // digitalWrite(TEST_PIN, !digitalRead(TEST_PIN)); // 56.58 kHz on scope
  PORTD ^= (1 << PD4); // 444.4 kHz on scope
}