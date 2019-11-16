const byte POT_GPIO = 36;
const byte LED_GPIO = 32;


void setup() { 
  Serial.begin(9600);
  ledcAttachPin(LED_GPIO, 0);
  ledcSetup(0, 4000, 12);
}

void loop() {
  Serial.println(analogRead(POT_GPIO));
  ledcWrite(0, analogRead(POT_GPIO));
  }
