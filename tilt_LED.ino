//Author: crocsman
//Date:9/4/2021

//Pullup input pin
int pullupInput = 2;
//pin writes to LED 
int ledOutput = 5;
//store INPUT val, assume HIGH
int input = 1;
void setup() {

 //pin5 write, turns LED on/off
 pinMode(5,OUTPUT);
 //pin2 read, input of external pullup resistor
 pinMode(2,INPUT);

}

void loop() {
  //read in pin2
  input = digitalRead(2);

  if(input == LOW)
  {
    digitalWrite(ledOutput, HIGH);
  }
  if(input == HIGH)
  {
    digitalWrite(ledOutput, LOW);
  }
  
  //debounces circuit, smooth reading
  delay(100);
}



//References:
// digitalRead() 
// https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/

//digitalWrite()
//https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
