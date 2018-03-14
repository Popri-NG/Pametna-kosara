#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(10,11); // RX, TX
int LED = 13; // the on-board LED
int Data; // the data received
String state;

 
void setup() {
  Bluetooth.begin(9600);
  Serial.begin(9600);
  Serial.println("Waiting fo");
  Bluetooth.println("12345");
  pinMode(LED,OUTPUT);
 
}
 
void loop() {

 /* while (Bluetooth.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = Bluetooth.read(); //Conduct a serial read
  state += c; //build the string- either "On" or "off"
  }  
  if (state.length() > 0) {
    Serial.println(state);
    Bluetooth.println(Serial.println());   
    state ="";
    }
    */
Bluetooth.println("12345"); 
delay(1000);
Bluetooth.println("666");
delay(2000);
Bluetooth.println("54321");
delay(2000);
}


