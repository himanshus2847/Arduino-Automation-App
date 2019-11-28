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
 * This code is for IP Address tab of Arduino Automation App.
 * The code is campatible for NodeMCU ESP-12E and ESP8266.
 * The code returns the value on Serial Monitor sent from the IP Address to the device.
 *=================================================================================================================================
 */

/* Code starts from here */

#include <ESP8266WiFi.h>
#include<WiFiClient.h>
WiFiClient client;
WiFiServer server(80);
const char* ssid = "WiFi SSID";          //WiFi Name
const char* password = "WiFi Password";  //WiFi Password

void setup()
{
  Serial.begin(115200);
  while ((!(WiFi.status() == WL_CONNECTED)))
  {
    delay(300);
    Serial.print("..");  //if not connected...
  }
  Serial.println("Connecting to WIFI");
  WiFi.begin(ssid, password);
  Serial.println("WiFi connected");
  Serial.println("NodeMCU Local IP is : ");
  Serial.println((WiFi.localIP()));
  server.begin();
}

void loop()
{
    client = server.available();
    if (!client) 
    {
      return; 
    }
    String data = checkClient();
    Serial.println(data);        
}
String checkClient (void)
{
  while(!client.available()) 
  delay(1); 
  String request = client.readStringUntil('\r');
  request.remove(0, 5);
  request.remove(request.length()-9,9);
  return request;
}

