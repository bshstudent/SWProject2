
#define PIN_LED 7

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
  Serial.println("Hello World");

}
int mode = 1;
void loop() {
  // put your main code here, to run repeatedly:
  fun(mode);
  mode+=1;
}

void fun(int mode){
  if(mode == 1){
    digitalWrite(PIN_LED,1);
  delay(1000);
  }
  else if(mode == 2){
    for(int i = 0; i < 5;i++){
    digitalWrite(PIN_LED,0);
    delay(100);
    digitalWrite(PIN_LED,1);
    delay(100);
    }
  }
  else{
    digitalWrite(PIN_LED,0);
  delay(1000);
  }
}