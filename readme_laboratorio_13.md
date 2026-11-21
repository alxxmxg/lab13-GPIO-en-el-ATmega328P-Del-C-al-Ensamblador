# Laboratorio 13: GPIO en ATmega328P

## 🛠️ Materiales
* 1 Arduino Uno + cable USB
* 1 Protoboard
* 4 LEDs
* 4 Resistencias de $220\ \Omega$
* Cables Dupont (macho-macho)

## 📌 ¿Qué hace cada práctica?

* **Lab 13a (C puro):** Hace parpadear el LED integrado (pin 13) manipulando directamente los registros `DDRB` y `PORTB` sin usar `pinMode` ni `digitalWrite`.
* **Lab 13b (ASM inline):** Controla el LED del pin 13 usando ensamblador AVR dentro de C (`sbi`, `cbi` y `out`).
* **Lab 13c (Carrera de LEDs):** Enciende 4 LEDs en secuencia (pines 8 al 11) usando registros y ensamblador en línea.