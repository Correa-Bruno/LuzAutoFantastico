#include <Arduino.h>
const int rojo = 0;
const int amarillo= 1;
const int verde = 2;
const int verde2 = 3;
const int amarillo2= 4;
const int rojo2 = 5;
int tiempo;
 
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
  
}

void loop() {
  digitalWrite(rojo, HIGH);
  delay(100);
  digitalWrite(rojo,LOW);
  digitalWrite(amarillo, HIGH);
  delay(100);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde, HIGH);
  delay(100);
  digitalWrite(verde,LOW);
  digitalWrite(verde2, HIGH);
  delay(100);
  digitalWrite(verde2,LOW);
  digitalWrite(amarillo2, HIGH);
  delay(100);
  digitalWrite(amarillo2,LOW);
  digitalWrite(rojo2, HIGH);
  delay(100);
  digitalWrite(rojo2,LOW);
  digitalWrite(amarillo2, HIGH);
  delay(100);
  digitalWrite(amarillo2,LOW);
  digitalWrite(verde2, HIGH);
  delay(100);
  digitalWrite(verde2,LOW);
  digitalWrite(verde, HIGH);
  delay(100);
  digitalWrite(verde,LOW);
  digitalWrite(amarillo, HIGH);
  delay(100);
  digitalWrite(amarillo,LOW);

}