const int switchPin = 2;
int sensorPin = A0;
int sensorValue = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2,INPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int reading = digitalRead(switchPin);
  if(reading==HIGH){
  sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
  delay(500);
  while(1){
  if(sensorValue<=340){
  digitalWrite(13, HIGH);
    delay(500);
  digitalWrite(13,LOW);
    delay(500);
  }
    else{
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
    }
   }
  }
}
