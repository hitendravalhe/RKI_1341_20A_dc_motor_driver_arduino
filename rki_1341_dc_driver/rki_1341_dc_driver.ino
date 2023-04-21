int dir = 8;
int pwm = 9;
int brk = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(dir,OUTPUT);
pinMode(pwm,OUTPUT);
pinMode(brk,OUTPUT);
digitalWrite(pwm,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(brk,LOW);
digitalWrite(dir,HIGH);
delay(2000);
digitalWrite(brk,HIGH);
delay(2000);
digitalWrite(brk,LOW);
digitalWrite(dir,LOW);
delay(2000);
digitalWrite(brk,HIGH);
delay(2000);
}
