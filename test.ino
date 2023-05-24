// A4988 sürücüsü bağlantıları
int stepPin = ;   // Step pini 
int dirPin = ;    // Direction pini

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {
  // Motoru sağa çevir
  digitalWrite(dirPin, HIGH);  // Sağa dönmesi için dir pini yüksek seviyeye ayarlanır
  for (int i = 0; i < 200; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);  // Step sinyalini 500 mikrosaniye yüksek seviyede tut
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);  // Step sinyalini 500 mikrosaniye düşük seviyede tut
  }

  delay(10000);  // 10 saniye bekle

  // Motoru sola çevir
  digitalWrite(dirPin, LOW);  // Sola dönmesi için dir pini düşük seviyeye ayarlanır
  for (int i = 0; i < 200; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);  // Step sinyalini 500 mikrosaniye yüksek seviyede tut
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);  // Step sinyalini 500 mikrosaniye düşük seviyede tut
  }

  delay(10000);  // 10 saniye bekle
}
