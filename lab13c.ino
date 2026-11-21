void setup() {
  DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2) | (1 << PB3); // PB0-PB3 como salidas
}

void loop() {
  // Ida: LED 1 (i=0) -> LED 4 (i=3)
  for (uint8_t i = 0; i < 4; i++) {
    uint8_t valor = (1 << i);
    asm volatile ("out %0, %1" : : "I" (0x05), "r" (valor));    delay(200);
  }

  // Vuelta: LED 4 (i=3) -> LED 1 (i=0)
  for (int i = 3; i >= 0; i--) {
    uint8_t valor = (1 << i);
    asm volatile ("out %0, %1" : : "I" (0x05), "r" (valor));
    delay(200);
  }
}