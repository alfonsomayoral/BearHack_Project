void setup() {
    pinMode(13, OUTPUT);
    Serial.begin(9600);
  }
  
  void loop() {
    if (Serial.available()) {
      char input = Serial.read();
      if (input == '1') {
        digitalWrite(13, HIGH);
      } else if (input == '0') {
        digitalWrite(13, LOW);
      }
    }
  }
  
