int led = 13;
int value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {

  if (Serial.available() > 0) {
    value = Serial.read();
    delay(5);

    if (value == '1') {
      digitalWrite(led, HIGH);
      Serial.println("LED is ON");
    }

    if (value == '0') {
      digitalWrite(led, LOW);
      Serial.println("LED is OFF");
    }
  }
}
