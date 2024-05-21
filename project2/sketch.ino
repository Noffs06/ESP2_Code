const int ledpins[] = {2,4,5};
const int numleds = sizeof(ledpins) / sizeof(ledpins[0]);
const int espera = 500;


void setup() {
  for(int i = 0; i < numleds; i++){
    pinMode(ledpins[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < numleds; i++){
    digitalWrite(ledpins[i], HIGH);
    delay(espera);
    digitalWrite(ledpins[i], LOW);
    delay(espera);
  }
 
}
