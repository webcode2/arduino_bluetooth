char Incoming_value = 0;
int LEDPin = 7;
const int Bzer = 8;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(Bzer, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("/n");
    if (Incoming_value == 'R') {

      digitalWrite(Bzer, HIGH);
      delay(100);
      digitalWrite(Bzer, LOW);
      delay(100);
      digitalWrite(Bzer, HIGH);
      delay(100);
      digitalWrite(Bzer, LOW);
      digitalWrite(LEDPin, HIGH);
    } else if (Incoming_value == 'L') {
      digitalWrite(Bzer, HIGH);
      digitalWrite(LEDPin, LOW);
      delay(200);
      digitalWrite(Bzer, LOW);
    }
  }
}