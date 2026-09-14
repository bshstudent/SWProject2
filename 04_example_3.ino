
#define PIN_LED 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED,0);
  delay(1000);
  digitalWrite(PIN_LED,1);
  delay(1000);
}
