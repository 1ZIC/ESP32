const byte LED_GPIO = 32;
int threshold = 20;

bool touch4detected = false;

void gotTouch(){
  touch4detected = true;
}

void setup(){
pinMode(LED_GPIO, OUTPUT);
Serial.begin(115200);
delay(1000);
touchAttachInterrupt(T4, gotTouch, threshold);
}

void loop(){
  if (touch4detected)
  {digitalWrite(LED_GPIO, HIGH);
  Serial.println("Touch detected");
  touch4detected = false;
  delay(500);
  digitalWrite(LED_GPIO, LOW);
}
} 
