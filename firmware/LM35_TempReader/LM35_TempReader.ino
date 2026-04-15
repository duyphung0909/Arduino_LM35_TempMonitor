const int sensorPin1 = A0; 
const int sensorPin2 = A1; 

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int adcValue1 = analogRead(sensorPin1);
  int adcValue2 = analogRead(sensorPin2);
  
  float temp1 = (adcValue1 * 500.0) / 1023.0;
  float temp2 = (adcValue2 * 500.0) / 1023.0;
  
  Serial.print("{\"temp1\": ");
  Serial.print(temp1);
  Serial.print(", \"temp2\": ");
  Serial.print(temp2);
  Serial.println("}");
  
  delay(1000); 
}