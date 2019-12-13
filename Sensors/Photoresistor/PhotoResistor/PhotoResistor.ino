const byte PHOTO_GPIO = 39;

void setup(){
  Serial.begin(112500);
}

void loop(){
  Serial.println(analogRead(PHOTO_GPIO));
  delay(500);
  
}
