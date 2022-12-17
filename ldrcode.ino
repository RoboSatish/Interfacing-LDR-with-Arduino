int analogPin= A0; 

int intiValue= 0; 
void setup() {
Serial.begin(9600); 
}
void loop() {
intiValue= analogRead(analogPin); 
Serial.println(sensorValue); 

delay(100);

}