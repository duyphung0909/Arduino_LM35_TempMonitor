const int lm35Pin = A0; 

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int analogValue = analogRead(lm35Pin); 
  float voltage = analogValue * (5.0 / 1023.0); 
  float temperature = voltage * 100.0; 
  
  Serial.print("Nhiet do hien tai: ");
  Serial.print(temperature);
  Serial.println(" *C");
  
  delay(1000); 
}