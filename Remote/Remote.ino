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
 * This code is for Remote tab of Arduino Automation App.
 * The code is campatible for all the Arduino Boards.
 *=================================================================================================================================
 */

/*
 * Connections of Arduino and Bluetooth Module HC-05 for this Code:
 *       Arduino |  Bluetooth Module (HC-05)
 *            3  |  RX
 *            2  |  TX
 *           5V  |  5V
 *          GND  |  GND
 */


/* Code starts from here */

#include <SoftwareSerial.h>   //including library for Software Serial communication

SoftwareSerial mySerial (2, 3);    //(RX, TX)

//defining all the pins of Arduino
#define m1 4
#define m2 5
#define m3 6
#define m4 7
#define sound 8
#define light 9

void setup()
{
  //setting all the pins 
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(sound, OUTPUT);
  pinMode(light, OUTPUT);

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
    if(val == 'F')    
    {
      //forward
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m3, HIGH);
      digitalWrite(m4, LOW);
      Serial.println("Going forward!");
    }
    if(val == 'B')
    {
      //backward
      digitalWrite(m1, LOW);
      digitalWrite(m2, HIGH);
      digitalWrite(m3, LOW);
      digitalWrite(m4, HIGH);
      Serial.println("Going backward!");
    }
    if(val == 'L')
    {
      //left
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m3, LOW);
      digitalWrite(m4, HIGH);
      Serial.println("Going left!");
    }
    if(val == 'R')
    {
      //right
      digitalWrite(m1, LOW);
      digitalWrite(m2, HIGH);
      digitalWrite(m3, HIGH);
      digitalWrite(m4, LOW);
      Serial.println("Going right!");
    }
    if(val == 'l')
    {
      //forward left
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m3, LOW);
      digitalWrite(m4, LOW);
      Serial.println("Going forward left!");
    }
    if(val == 'r')
    {
      //forward right
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
      digitalWrite(m3, HIGH);
      digitalWrite(m4, LOW);
      Serial.println("Going forward right!");
    }
    if(val == 'm')
    {
      //backward left
      digitalWrite(m1, LOW);
      digitalWrite(m2, HIGH);
      digitalWrite(m3, LOW);
      digitalWrite(m4, LOW);
    }
    if(val == 'n')
    {
      //backward right
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
      digitalWrite(m3, LOW);
      digitalWrite(m4, HIGH);
    }
    if(val == 'Z')
    {
      //sound on
      digitalWrite(sound, HIGH);
    }
    if(val == 'Y')
    {
      //light on
      digitalWrite(light, HIGH);
    }
    if(val == 'S')
    {
      //all off
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
      digitalWrite(m3, LOW);
      digitalWrite(m4, LOW);
      digitalWrite(sound, LOW);
    }
  }
}

