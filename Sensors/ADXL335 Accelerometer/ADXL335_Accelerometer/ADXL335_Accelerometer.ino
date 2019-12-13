const byte xpin = 34;
const byte ypin = 39;
const byte zpin = 36;

void setup(){
  Serial.begin(9600);

  analogSetWidth(9);
}

void loop(){
  Serial.print(analogRead(xpin));
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  Serial.print("\t");
  Serial.print(analogRead(zpin));
  Serial.print("\t");

  if(analogRead(zpin) < 270)
  {
    Serial.print("\t");
    Serial.print("Gadget is horizontal to table.");
  }
  if(analogRead(xpin) < 190)
  {
    Serial.print("\t");
    Serial.print("Gadget front to table.");
  }
  if((analogRead(ypin) < 280 && analogRead(ypin) > 270) ||
  (analogRead(ypin) < 180 && analogRead(ypin) > 170))
  {
    Serial.print("\t");
    Serial.print("Gadget is on its side.");
  }
  Serial.println();
  delay(100);
  
}
