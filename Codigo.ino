int boton = 2;
int led = 3;

void setup() {
  pinMode(boton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(boton) == HIGH){
    digitalWrite(led,LOW);
  }else{
    digitalWrite(led,HIGH);
  }
}
