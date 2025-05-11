
#define RELAY_PIN    13 
#define MOISTURE_PIN A0 
#define THRESHOLD 480 //change threshold accordingly

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
}
void loop() {
  int value = analogRead(MOISTURE_PIN); // read the analog valuse for the moisture sensor

  if (value > THRESHOLD) {
    Serial.print("The soil is dry => turn the pump ON");
    digitalWrite(RELAY_PIN, HIGH);
  } else {
    Serial.print("The soil is wet => turn the pump OFF");
    digitalWrite(RELAY_PIN, LOW);
  }
  Serial.print(" (");
  Serial.print(value);
  Serial.println(")");

  delay(200);
}
