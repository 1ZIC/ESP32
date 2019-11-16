void setup() {
  
}

void loop(){
  for (int value = 0; value <255; value=value+5)
  {
    dacWrite(25, value);
  }

  for (int value = 255; value > -1; value = value-5)
  {
    dacWrite(25, value);
  }
}
//  for (int deg = 0; deg < 360; deg++){
//   dacWrite(25, int(128 + 80 * (sin(deg*PI/180))));
