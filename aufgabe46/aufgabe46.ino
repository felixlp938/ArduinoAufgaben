//Ampelschaltung
// 13 = gelb
// 10 = rot
// 7  = gruen

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(500); //wait 500 milisecs
  digitalWrite(7, LOW);
  digitalWrite(13, HIGH);
  delay(300); //wait 300 milisecs
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(1000); //wait 1 sec
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
}
