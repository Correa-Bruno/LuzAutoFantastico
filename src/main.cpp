#include <Arduino.h>
const int rojo = 8;
const int amarillo= 9;
const int verde = 10;
const int verde2 = 11;
const int amarillo2= 12;
const int rojo2 = 13;

volatile int tiempo = 1000; 

void mas(){
  delay(20);
  tiempo++;
}
void menos(){
  tiempo--;
  delay(20);
}
 
void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(amarillo2, OUTPUT);
  pinMode(rojo2, OUTPUT);


  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(rojo2, LOW);
  digitalWrite(amarillo2, LOW);
  digitalWrite(verde2, LOW);
  
  attachInterrupt(digitalPinToInterrupt(2), mas, RISING);
  attachInterrupt(digitalPinToInterrupt(3), menos, RISING);

}

void loop() {
  digitalWrite(rojo, HIGH);
  delay(tiempo);
  digitalWrite(rojo,LOW);
  digitalWrite(amarillo, HIGH);
  delay(tiempo);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde, HIGH);
  delay(tiempo);
  digitalWrite(verde,LOW);
  digitalWrite(verde2, HIGH);
  delay(tiempo);
  digitalWrite(verde2,LOW);
  digitalWrite(amarillo2, HIGH);
  delay(tiempo);
  digitalWrite(amarillo2,LOW);
  digitalWrite(rojo2, HIGH);
  delay(tiempo);
  digitalWrite(rojo2,LOW);
  digitalWrite(amarillo2, HIGH);
  delay(tiempo);
  digitalWrite(amarillo2,LOW);
  digitalWrite(verde2, HIGH);
  delay(tiempo);
  digitalWrite(verde2,LOW);
  digitalWrite(verde, HIGH);
  delay(tiempo);
  digitalWrite(verde,LOW);
  digitalWrite(amarillo, HIGH);
  delay(tiempo);
  digitalWrite(amarillo,LOW);

}