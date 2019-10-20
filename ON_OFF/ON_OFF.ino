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
 * The code is only campatible for Arduino MEGA.
 * You can remove the pins from 14 to 21 from the code to make it work for Arduino UNO
 *=================================================================================================================================
 */

/*
 * Connections of Arduino MEGA and Bluetooth Module HC-05 for this Code:
 * Arduino MEGA  |  Bluetooth Module (HC-05)
 *            3  |  RX
 *            2  |  TX
 *           5V  |  5V
 *          GND  |  GND
 */


/* Code starts from here */

#include <SoftwareSerial.h>   //including library for Software Serial communication

SoftwareSerial mySerial (2, 3);    //(RX, TX)

//defining all the pins of Arduino MEGA
#define s1 4
#define s2 5
#define s3 6
#define s4 7
#define s5 8
#define s6 9
#define s7 10
#define s8 11
#define s9 12
#define s10 13
#define s11 14
#define s12 15
#define s13 16
#define s14 17
#define s15 18
#define s16 19
#define s17 20
#define s18 21

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
  pinMode(s10, OUTPUT);
  pinMode(s11, OUTPUT);
  pinMode(s12, OUTPUT);
  pinMode(s13, OUTPUT);
  pinMode(s14, OUTPUT);
  pinMode(s15, OUTPUT);
  pinMode(s16, OUTPUT);
  pinMode(s17, OUTPUT);
  pinMode(s18, OUTPUT);

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
    if(val == 'J')
    {
      digitalWrite(s10, HIGH);
      Serial.println("Switch 10 is ON");
    }
    if(val == 'j')
    {
      digitalWrite(s10, LOW);
      Serial.println("Switch 10 is OFF");
    }
    if(val == 'K')
    {
      digitalWrite(s11, HIGH);
      Serial.println("Switch 11 is ON");
    }
    if(val == 'k')
    {
      digitalWrite(s11, LOW);
      Serial.println("Switch 11 is OFF");
    }
    if(val == 'L')
    {
      digitalWrite(s12, HIGH);
      Serial.println("Switch 12 is ON");
    }
    if(val == 'l')
    {
      digitalWrite(s12, LOW);
      Serial.println("Switch 12 is OFF");
    } 
    if(val == 'M')
    {
      digitalWrite(s13, HIGH);
      Serial.println("Switch 13 is ON");
    }
    if(val == 'm')
    {
      digitalWrite(s13, LOW);
      Serial.println("Switch 13 is OFF");
    }
    if(val == 'N')
    {
      digitalWrite(s14, HIGH);
      Serial.println("Switch 14 is ON");
    }
    if(val == 'n')
    {
      digitalWrite(s14, LOW);
      Serial.println("Switch 14 is OFF");
    }
    if(val == 'O')
    {
      digitalWrite(s15, HIGH);
      Serial.println("Switch 15 is ON");
    }
    if(val == 'o')
    {
      digitalWrite(s15, LOW);
      Serial.println("Switch 15 is OFF");
    }
    if(val == 'P')
    {
      digitalWrite(s16, HIGH);
      Serial.println("Switch 16 is ON");
    }
    if(val == 'p')
    {
      digitalWrite(s16, LOW);
      Serial.println("Switch 16 is OFF");
    }
    if(val == 'Q')
    {
      digitalWrite(s17, HIGH);
      Serial.println("Switch 17 is ON");
    }
    if(val == 'q')
    {
      digitalWrite(s17, LOW);
      Serial.println("Switch 17 is OFF");
    }
    if(val == 'R')
    {
      digitalWrite(s18, HIGH);
      Serial.println("Switch 18 is ON");
    }
    if(val == 'r')
    {
      digitalWrite(s18, LOW);
      Serial.println("Switch 18 is OFF");
    }
  }
}
