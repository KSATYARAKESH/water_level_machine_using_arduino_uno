//water level meachine 
const int analogInPin = A0;//water level sensor attached to pin A0
int sensorValue = 0;

void setup() {
  // declare pin  to be an output:
  pinMode(2,OUTPUT); //Buzzer attached to pin 2
    pinMode(3,OUTPUT);//led attached to pin 3
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(2);
  if((sensorValue>=100)&&(sensorValue<=600)){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    delay(100);
    }
}