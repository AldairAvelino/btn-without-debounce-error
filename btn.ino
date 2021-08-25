#define led 13
uint8_t btn=8;
uint8_t estado=0;
boolean Status;
void setup() {
  // put your setup code here, to run once:
  pinMode(btn,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(btn)) estado=1;
  else if((digitalRead(btn)) && estado){
    if(!Status){
      digitalWrite(led,HIGH);
      Status=true;
    }else{
      digitalWrite(led,LOW);
      Status=false;
    }
    estado=0;
  }
}