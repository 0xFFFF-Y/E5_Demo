
const int startPin = 2;  
const int countPin = 0;
const int resetPin = 1;
const int ledPin = 13; 
int startButton =0, countButton =0, resetButton=0;
int counter = 0;
// This is sample comment for test
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(startPin, INPUT); 
  pinMode(countPin, INPUT); 
  pinMode(resetPin, INPUT);  
}
//Below is a voild loop
void loop() {
countButton = digitalRead(countPin);
if (countButton == HIGH)
{
 counter = counter+1;
}

resetButton = digitalRead(resetPin);
if (resetButton == HIGH)
{
counter = 0;
}
startButton = digitalRead(startPin);

if (startButton == HIGH)
{
	for (int blink=0; blink<5; blink++)
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  counter = counter-1;
}
}
}
