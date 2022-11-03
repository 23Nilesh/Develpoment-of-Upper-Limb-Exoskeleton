int PWM = 3;    // motor starts at 40PWM, 1.5686RPM
int dir = 2;    // direction of motor
int brk = 8;    // break
int angle = 90; // angle in degree
int Speed = 10; // RPM
int analog_Speed = (int)255*Speed/10; // For PWM

int measure(int angle, int Speed){
  float a = 1000.0*angle/(6*Speed);
  return (int)a;
}

void setup() {
//  Serial.begin(9600);
  pinMode(dir, OUTPUT);
  pinMode(PWM, OUTPUT);
  pinMode(brk, OUTPUT);
}

int i = 0;
void loop() {
  analogWrite(PWM, analog_Speed);
//  int sensorValue = analogRead(A2);
//  Serial.println(sensorValue);

  digitalWrite(brk, LOW);
  digitalWrite(dir, HIGH);
  delay(measure(angle, Speed)); 

  digitalWrite(brk, HIGH);
  delay(2000);
  digitalWrite(brk, LOW);
  digitalWrite(dir, LOW);
  delay(measure(angle, Speed)); 
  
  digitalWrite(brk, HIGH);
  delay(2000);
}
