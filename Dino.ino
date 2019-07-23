int at2;
int state;
void setup() {

  Serial.begin(9600);
}

void loop() {
  //LDR READING
  at2 = analogRead(A2);
  //THE OUTPUT CHANGE DEPENDING OF THE ENVIRONMENTAL LIGHT, JUST CHANGE THE PARAMETERS DEPEDING THE BRIGHTNESS OF THE DISPLAY
  if (at2 < 590 && at2 > 575) {
    state = 1;
  } else {
    state = 0;
  }
  // This print send to PySerial the state if it needs to jump just send the 1 and if not send 0
  Serial.print(state);
}
