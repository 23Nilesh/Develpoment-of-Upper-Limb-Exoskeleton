int pwm = 3;
int dir = 2;
int brk = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pwm, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(brk, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(brk, LOW);
  digitalWrite(dir, LOW);
  analogWrite(pwm, 255);
  delay(3000);
  digitalWrite(brk, HIGH);
  delay(1000);
  digitalWrite(brk, LOW);
  analogWrite(pwm, 100);
  delay(3000);
}
