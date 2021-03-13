#define IN_PIN_0 0
#define IN_PIN_1 1
#define IN_PIN_2 2
#define IN_PIN_3 3
#define NUM_LEDS 60

typedef struct Pins{
  char PIN_0:1;
  char PIN_1:1;
  char PIN_2:1;
  char PIN_3:1;
} Pins;

Pins null_Pins = {0, 1, 0, 1};
Pin current_Pins;
unsigned char LEDS[NUM_LEDS];
char *ins = (char *) malloc(256);

void setup() {
  pinmode(IN_PIN_0, INPUT)
  pinmode(IN_PIN_1, INPUT)
  pinmode(IN_PIN_2, INPUT)
  pinmode(IN_PIN_3, INPUT)
}

void loop() {
  char changed = 0;
  char pin_0, pin_1, pin_2, pin_3;
  if (digitalRead(IN_PIN_0) != Pv_pins.PIN_0) {
    changed++;
  }
  if (digitalRead(IN_PIN_1) != Pv_pins.PIN_1) {
    changed++;
  }
  if (digitalRead(IN_PIN_2) != Pv_pins.PIN_2) {
    changed++;
  }
  if (digitalRead(IN_PIN_3) != Pv_pins.PIN_3) {
    changed++;
  }
  if(changed) {
    
  }
  
}
