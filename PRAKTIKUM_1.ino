int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led, LOW);
  delay(300);
  digitalWrite(led, HIGH);
  delay(300);
  
  // put your main code here, to run repeatedly:

}
