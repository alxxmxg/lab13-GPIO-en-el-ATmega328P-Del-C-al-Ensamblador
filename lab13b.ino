// Lab 13b: ASM inline AVR con sbi/cbi
void setup() {
// DDRB bit 5 = 1 (PB5 salida) — dirección I/O 0x04
asm volatile ("sbi %0, %1" : : "I" (0x04), "I" (5));
}
void loop() {
uint8_t valor = 0b00100000; // PB5 = 1
asm volatile ("out %0, %1" : : "I" (0x05), "r" (valor));
delay(500);
valor = 0;
asm volatile ("out %0, %1" : : "I" (0x05), "r" (valor));
delay(500);
}
