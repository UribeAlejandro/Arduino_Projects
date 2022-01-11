const int r0 = 2;
const int y0 = 3;
const int g0 = 4;

const int r1 = 5;
const int y1 = 6;
const int g1 = 7;

const int r2 = 8;
const int y2 = 9;
const int g2 = 10;

const int r3 = 11;
const int y3 = 12;
const int g3 = 13;


void setup() {
  pinMode(r0, OUTPUT);
  pinMode(y0, OUTPUT);
  pinMode(g0, OUTPUT);
  
  pinMode(r1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(g1, OUTPUT);

  pinMode(r2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(g2, OUTPUT);

  pinMode(r3, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(g3, OUTPUT);
}

void loop() {
  changeLights();
  
}

void changeLights() {
  
  digitalWrite(r0, HIGH);
  digitalWrite(y0, LOW);
  digitalWrite(g0, LOW);
  
  digitalWrite(r1, LOW);
  digitalWrite(y1, LOW);
  digitalWrite(g1, HIGH);

  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);

  digitalWrite(r3, LOW);
  digitalWrite(y3, LOW);
  digitalWrite(g3, HIGH);
  delay(5000);

  digitalWrite(r0, HIGH);
  digitalWrite(y0, LOW);
  digitalWrite(g0, LOW);
  
  digitalWrite(r1, LOW);
  digitalWrite(y1, HIGH);
  digitalWrite(g1, HIGH);

  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);

  digitalWrite(r3, LOW);
  digitalWrite(y3, HIGH);
  digitalWrite(g3, HIGH);
  delay(1000);

  digitalWrite(r0, HIGH);
  digitalWrite(y0, LOW);
  digitalWrite(g0, LOW);
  
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);

  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);

  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  delay(1000);

  digitalWrite(r0, HIGH);
  digitalWrite(y0, HIGH);
  digitalWrite(g0, LOW);
  
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);

  digitalWrite(r2, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(g2, LOW);

  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  delay(1500);

  digitalWrite(r0, LOW);
  digitalWrite(y0, LOW);
  digitalWrite(g0, HIGH);
  
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);

  digitalWrite(r2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(g2, HIGH);

  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  delay(5000);

  digitalWrite(r0, LOW);
  digitalWrite(y0, HIGH);
  digitalWrite(g0, HIGH);
  
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);

  digitalWrite(r2, LOW);
  digitalWrite(y2, HIGH);
  digitalWrite(g2, HIGH);

  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  delay(1000);

  digitalWrite(r0, HIGH);
  digitalWrite(y0, LOW);
  digitalWrite(g0, LOW);
  
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);

  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);

  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  delay(1000);

  digitalWrite(r0, HIGH);
  digitalWrite(y0, LOW);
  digitalWrite(g0, LOW);
  
  digitalWrite(r1, LOW);
  digitalWrite(y1, HIGH);
  digitalWrite(g1, HIGH);

  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);

  digitalWrite(r3, LOW);
  digitalWrite(y3, HIGH);
  digitalWrite(g3, HIGH);
  delay(1500);
}
