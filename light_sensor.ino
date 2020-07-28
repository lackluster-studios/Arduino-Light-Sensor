//code for part six of my arduino tutorial: https://lacklusterstudios.blogspot.com/2020/07/arduino-tutorial-light-sensor.html
//reads a value form a phototransistor and turns on an LED when it is dark.
//licensed under GPL 3.0
//Author: chris nichols (github/rteturn5)


#define LIGHTPIN A1    //pin which will read the value of the phototransistor
#define LEDPIN 5      //pin which will turn on/off the LED
void setup() {
  pinMode(LEDPIN,OUTPUT);  //set LEDPIN to be an output
  Serial.begin(9600);     //start Serial with 9600 baud rate

}

void loop() {
    int light = analogRead(LIGHTPIN);   //read the value of the phototransistor. store that value inside of 'light'
    if(light < 1) {                    //if value read form phototransistor is less than 1
      digitalWrite(LEDPIN,HIGH);       //turn on LED
    }
    else {
      digitalWrite(LEDPIN,LOW);  //otherwise, turn off LED
    }
}
