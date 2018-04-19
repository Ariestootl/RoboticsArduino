
int x;
int y;

void setup() {
  
//NO SETUP FOR THE MOMENT

pinMode(A1,INPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);
}
void loop() {
  x = analogRead(A1);
  Serial.println(x);
  y = map(x,500,1023,0,255);
  analogWrite(11,y);
  delay(100);
  
  
  
}
