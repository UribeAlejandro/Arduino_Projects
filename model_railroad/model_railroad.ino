int Green1=2;
int Yellow1=3;
int Red1=4;
int Green2=5;
int Yellow2=6;
int Red2=7;

void setup(){
pinMode(Green1,OUTPUT);//Sets up pin 2 as output
pinMode(Yellow1,OUTPUT);//sets up pin 3 as output
pinMode(Red1, OUTPUT);//sets up pin 4 as output
pinMode(Green2,OUTPUT);//sets up pin 5 as output
pinMode(Yellow2,OUTPUT);//sets up pin 6 as output
pinMode(Red2, OUTPUT);
}

void loop(){
  digitalWrite(Green1,LOW);//Green light 1 is on
  digitalWrite(Yellow1,HIGH);
  digitalWrite(Red1,HIGH);
  digitalWrite(Green2,HIGH);
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Red2,LOW);//Red light 2 is on
  delay(10000);//delay of 10 seconds
  digitalWrite(Green1,HIGH);
  digitalWrite(Yellow1,LOW);//Yellow light 1 is on
  digitalWrite(Red1,HIGH);
  digitalWrite(Green2,HIGH);
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Red2,LOW);//Red light 2 is on
  delay(3000);//delay of 3 seconds
  digitalWrite(Green1,HIGH);
  digitalWrite(Yellow1,HIGH);
  digitalWrite(Red1,LOW);//Red light 1 is on
  digitalWrite(Green2,HIGH);
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Red2,LOW);//Red light 2 is on
  delay(1000);//delay of 1 second
  digitalWrite(Green1,HIGH);
  digitalWrite(Yellow1,HIGH);
  digitalWrite(Red1,LOW);//Red light 1 is on
  digitalWrite(Green2,LOW);//Green light 2 is on
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Red2,HIGH);
  delay(10000);//delay of 10 seconds
  digitalWrite(Green1,HIGH);
  digitalWrite(Yellow1,HIGH);
  digitalWrite(Red1,LOW);//Red light 1 is on
  digitalWrite(Green2,HIGH);
  digitalWrite(Yellow2,LOW);//Yellow light 2 is on
  digitalWrite(Red2,HIGH);
  delay(3000);//delay of 3 seconds
  digitalWrite(Green1,HIGH);
  digitalWrite(Yellow1,HIGH);
  digitalWrite(Red1,LOW);//Red light 1 is on
  digitalWrite(Green2,HIGH);
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Red2,LOW);//Red light 2 is on
  delay(1000);//delay of 1 second
}
