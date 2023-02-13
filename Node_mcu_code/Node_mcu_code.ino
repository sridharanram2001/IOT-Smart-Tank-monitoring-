int Trig=3;
int Echo=4;
int dist=0;


void setup() {
  Serial.begin(9600);
  pinMode(Trig,OUTPUT);
  pinMode(Echo,INPUT);
}

void loop() {
  
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(15);
  digitalWrite(Trig, LOW);
  int distance = pulseIn(Echo, HIGH, 26000);
  distance=distance/58;

  Serial.print(distance);
  Serial.println("   cm");
  delay(50);
  
  }
