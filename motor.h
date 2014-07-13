//
void unStepMotor(int pin_1, int pin_2,int pin_3,int pin_4,int speedMotor){
  digitalWrite(pin_1,HIGH);
  digitalWrite(pin_2,LOW);
  digitalWrite(pin_3,LOW);
  digitalWrite(pin_4,LOW);
  delay(speedMotor + 1);
  //
  digitalWrite(pin_1,HIGH);
  digitalWrite(pin_2,HIGH);
  digitalWrite(pin_3,LOW);
  digitalWrite(pin_4,LOW);
  delay(speedMotor + 1);
  //
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,HIGH);
  digitalWrite(pin_3,LOW);
  digitalWrite(pin_4,LOW);
  delay(speedMotor + 1);
  //
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,HIGH);
  digitalWrite(pin_3,HIGH);
  digitalWrite(pin_4,LOW);
  delay(speedMotor + 1);
  //
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,LOW);
  digitalWrite(pin_3,HIGH);
  digitalWrite(pin_4,LOW);
  delay(speedMotor + 1);
  //
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,LOW);
  digitalWrite(pin_3,HIGH);
  digitalWrite(pin_4,HIGH);
  delay(speedMotor + 1);
  //
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,LOW);
  digitalWrite(pin_3,LOW);
  digitalWrite(pin_4,HIGH);
  delay(speedMotor + 1);
  //
  digitalWrite(pin_1,HIGH);
  digitalWrite(pin_2,LOW);
  digitalWrite(pin_3,LOW);
  digitalWrite(pin_4,HIGH);
  delay(speedMotor + 1);  
  //
}
void setup(){
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
}
//
void loop(){
  for(int i=0; i<=1024; i++) unStepMotor(8,7,4,2,0);
  for(int j=0; j<=1024; j++) unStepMotor(2,4,7,8,0);
}