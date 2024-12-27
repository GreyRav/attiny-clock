#include <Arduino.h>
#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB3  // La LED est connectée à la broche PB3

int main(void) {
  // Configure la broche PB3 en sortie
  DDRB |= (1 << LED_PIN);
  
  while (1) {
    // Allume la LED
    PORTB |= (1 << LED_PIN);
    _delay_ms(500);  // Attend 500 ms
    
    // Éteint la LED
    PORTB &= ~(1 << LED_PIN);
    _delay_ms(500);  // Attend 500 ms
  }
  
  return 0;
}

