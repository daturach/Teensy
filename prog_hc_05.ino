// Programming device: Teensy 4.1
// Bluetooth module: HC-05
// Basic sketch from https://create.arduino.cc/projecthub/diyguyChris/bluetooth-at-commands-settings-hc05-hc06-305257

// Serial: monitor at 9600
// Serial2: Connection to HC-05 at 38400; PIN 7 --> TXD; PIN 8 --> RXD; 3.3V --> VCC; GND --> GND

char c=' ';
void setup() 
{
  Serial.begin(9600);
  Serial.println("ready");
  //Bluetooth.begin(38400);
  Serial2.begin(38400);
}

void loop() 
{
  if(Serial2.available())
  {
    c=Serial2.read();
    Serial.write(c);
  }
  if(Serial.available())
  {
    c=Serial.read();
    Serial2.write(c);
  }
}
