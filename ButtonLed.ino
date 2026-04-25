// Dichiarazione variabili pin

int led = 13;
int button = 12;

int state = 0;

// Setup

void setup() {

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

// Ciclo

void loop() {

  // Assegnazione stato led

  state = digitalRead(button);
  
  // Struttura condizionale stato Button

  if (state == 1) {

    digitalWrite(led, HIGH);

  }
  else {

    digitalWrite(led, LOW);

  }
  
}