/********************************************************************************************************************************
 *  
 * Hi! I am Himanshu Sharma the creater of Arduino Automation App.
 * By Profession I am an Electronics and Embedded Developer.
 * Also I have a YouTube channel "Engineers & Electronics" (https://www.youtube.com/engineerselectronics) 
 * where you can learn a lot more stuffs regarding Arduino & it's Programming.
 * You can also message me your queries on Instagram @sharma.himanshu_ (https://instagram.com/sharma.himanshu_)
 * All the Programs for Arduino Automation App are available on my GitHub Page (https://github.com/himanshus2847)
 * 
 *********************************************************************************************************************************
 *
 *================================================================================================================================
 * This code is for ON/OFF tab of Arduino Automation App.
 * The code is campatible for all Arduino Boards
 * You can use the digiatl pins from 4 to 12 to connect the Relay Module
 *=================================================================================================================================
 */

/*
 * Connections of Arduino and Bluetooth Module HC-05 for this Code:
 *      Arduino  |  Bluetooth Module (HC-05)
 *            3  |  RX
 *            2  |  TX
 *           5V  |  5V
 *          GND  |  GND
 */


/* Code starts from here */

#include <SoftwareSerial.h>   //including library for Software Serial communication

SoftwareSerial mySerial (2, 3);    //(RX, TX)

//defining all the pins of Arduino
#define s1 4
#define s2 5
#define s3 6
#define s4 7
#define s5 8
#define s6 9
#define s7 10
#define s8 11
#define s9 12

void setup() 
{
  //setting all the pins 
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(s4, OUTPUT);
  pinMode(s5, OUTPUT);
  pinMode(s6, OUTPUT);
  pinMode(s7, OUTPUT);
  pinMode(s8, OUTPUT);
  pinMode(s9, OUTPUT);

  //defining baudrate
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() 
{
  if(mySerial.available() == 1)   //if communication is going on
  {
    char val = mySerial.read();   //Read the data recieved
    Serial.println("Recieved data is " + (String) val);
    if(val == 'A')    
    {
      digitalWrite(s1, HIGH);
      Serial.println("Switch 1 is ON");
    }
    if(val == 'a')
    {
      digitalWrite(s1, LOW);
      Serial.println("Switch 1 is OFF");
    }
    if(val == 'B')
    {
      digitalWrite(s2, HIGH);
      Serial.println("Switch 2 is ON");
    }
    if(val == 'b')
    {
      digitalWrite(s2, LOW);
      Serial.println("Switch 2 is OFF");
    }
    if(val == 'C')
    {
      digitalWrite(s3, HIGH);
      Serial.println("Switch 3 is ON");
    }
    if(val == 'c')
    {
      digitalWrite(s3, LOW);
      Serial.println("Switch 3 is OFF");
    }
    if(val == 'D')
    {
      digitalWrite(s4, HIGH);
      Serial.println("Switch 4 is ON");
    }
    if(val == 'd')
    {
      digitalWrite(s4, LOW);
      Serial.println("Switch 4 is OFF");
    }
     if(val == 'E')
    {
      digitalWrite(s5, HIGH);
      Serial.println("Switch 5 is ON");
    }
    if(val == 'e')
    {
      digitalWrite(s5, LOW);
      Serial.println("Switch 5 is OFF");
    }
     if(val == 'F')
    {
      digitalWrite(s6, HIGH);
      Serial.println("Switch 6 is ON");
    }
    if(val == 'f')
    {
      digitalWrite(s6, LOW);
      Serial.println("Switch 6 is OFF");
    }
    
     if(val == 'G')
    {
      digitalWrite(s7, HIGH);
      Serial.println("Switch 7 is ON");
    }
    if(val == 'g')
    {
      digitalWrite(s7, LOW);
      Serial.println("Switch 7 is OFF");
    }
    if(val == 'H')
    {
      digitalWrite(s8, HIGH);
      Serial.println("Switch 8 is ON");
    }
    if(val == 'h')
    {
      digitalWrite(s8, LOW);
      Serial.println("Switch 8 is OFF");
    }
    if(val == 'I')
    {
      digitalWrite(s9, HIGH);
      Serial.println("Switch 9 is ON");
    }
    if(val == 'i')
    {
      digitalWrite(s9, LOW);
      Serial.println("Switch 9 is OFF");
    }
  }
}
