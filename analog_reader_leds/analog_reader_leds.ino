int r0 = 7;
int r1 = 5;

int b0 = 6;
int b1 = 4;


void setup() {
  //the setup routine runs once when you press reset
  pinMode(r0, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(b0, OUTPUT);
  pinMode(b1, OUTPUT);
  
  Serial.begin(9600); //initialize serial communication at 9600 bits per second
}

void loop() {
  //the loop routine runs over and over again forever

  int sensorValue = analogRead(A0); //read the input on analog pin 0

  change_lights(sensorvalue);
  
  Serial.println(sensorValue); //print out the value you read

  delay(100); //delay in between reads for stability
}

void change_lights() {
  digitalWrite(r0, HIGH);
  digitalWrite(r1, HIGH);
  digitalWrite(b0, HIGH);
  digitalWrite(b1, HIGH);
}
