const int buzzer = 2; //buzzer to arduino pin 2

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer, 1000); //Send 1Khz sound signal...
  delay(1000);
  noTone(buzzer);
  delay(1000);
}
