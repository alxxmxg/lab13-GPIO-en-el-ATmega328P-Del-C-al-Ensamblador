// Lab 13a: Configuración de registros (C puro)
void setup() {
DDRB |= (1 << PB5); // PB5 (pin 13) como salida
}
void loop() {
PORTB |= (1 << PB5); // Encender LED (PB5 = 1)
delay(200);

PORTB &= ~(1 << PB5); // Apagar LED (PB5 = 0)
delay(200);


}
// void loop() {
//PORTB |= (1 << PB5);
//for (volatile long i = 0; i < 100000; i++); // Retardo por bucle
//PORTB &= ~(1 << PB5);
//for (volatile long i = 0; i < 100000; i++);
//}
