int redPwm = 9;
int greenPwm = 11;
int bluePwm = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPwm, OUTPUT);
  pinMode(greenPwm, OUTPUT);
  pinMode(bluePwm, OUTPUT);
}

void loop() {
  int i;
  // put your main code here, to run repeatedly:
  /* for (i = 0; i < 200; i += 5) {
    analogWrite(redPwm, i);
    delay(50);
  }
  */
  for (i = 0; i < 200; i += 5) {
    analogWrite(redPwm, 200 - i);
    analogWrite(greenPwm, i);
    delay(50);
  }
  analogWrite(redPwm, 0);
  for (i = 0; i < 200; i+= 5) {
    analogWrite(greenPwm, 200 - i);
    analogWrite(bluePwm, i);
    delay(50);
  }
  analogWrite(greenPwm, 0);  
  for (i = 0; i < 200; i+= 5) {
    analogWrite(bluePwm, 200 - i);
    analogWrite(redPwm, i);
    delay(50);
  }
  analogWrite(bluePwm, 0);
}
