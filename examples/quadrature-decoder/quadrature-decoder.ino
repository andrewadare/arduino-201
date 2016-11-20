#define ENC_PIN_A 2  // Encoder channel A (INT0/PD2)
#define ENC_PIN_B 3  // Encoder channel B (INT1/PD3)

// Quadrature encoder variables - modified in interrupt handlers
volatile long encoderTicks = 0;
volatile uint8_t prevB = 0;

void setup()
{
  Serial.begin(115200);

  // Quadrature decoder setup
  pinMode(ENC_PIN_A, INPUT);
  pinMode(ENC_PIN_B, INPUT);
  prevB = digitalRead(ENC_PIN_B);
  attachInterrupt(digitalPinToInterrupt(ENC_PIN_A), decodeA, RISING);
  attachInterrupt(digitalPinToInterrupt(ENC_PIN_B), decodeB, CHANGE);
}

void loop()
{

}

// ISRs for quadrature decoder readout
void decodeA()
{
  prevB ? encoderTicks-- : encoderTicks++;
}
void decodeB()
{
  prevB = !prevB;
}
