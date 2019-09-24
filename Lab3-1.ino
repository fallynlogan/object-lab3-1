//button connected to pin 7 
//led connected to pin 8 
  int buttonPin = 7;
  int LEDPin = 8;
void setup() {
  //set digital pins as inputs and outputs 
  pinMode(buttonPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  
}

void loop() {
  //if button is pressed turn leds on otherwise off 
  if(digitalRead(buttonPin)==1){
    digitalWrite(LEDPin, HIGH);
  }else{
    digitalWrite(LEDPin, LOW);
  }
  //prints each piece on info from board to ternminal on new line 
  Serial.println(digitalRead(buttonPin));
  //slows down print rate (in milliseconds) 
  delay(250);
  

}
