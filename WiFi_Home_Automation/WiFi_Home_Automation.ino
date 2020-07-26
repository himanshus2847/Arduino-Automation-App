#include <ESP8266WiFi.h>

WiFiClient client;
WiFiServer server(80);

#define relay1 D5
#define relay2 D6
#define relay3 D7 
#define relay4 D8

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin("iot", "project1234");
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(200);
    Serial.print("..");
  }
  Serial.println();
  Serial.println("NodeMCU is connected!");
  Serial.println(WiFi.localIP());
  server.begin();
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  client = server.available();  //Gets a client that is connected to the server and has data available for reading.    
  if (client == 1)
  {  
    String request =  client.readStringUntil('\n');
    Serial.println(request);
    request.trim();
    if(request == "GET /A HTTP/1.1")
    {
      digitalWrite(relay1, HIGH);
    }
    else if(request == "GET /a HTTP/1.1")
    {
      digitalWrite(relay1, LOW);
    }
    else if(request == "GET /B HTTP/1.1")
    {
      digitalWrite(relay2, HIGH);
    }
    else if(request == "GET /b HTTP/1.1")
    {
      digitalWrite(relay2, LOW);
    }
    else if(request == "GET /C HTTP/1.1")
    {
      digitalWrite(relay3, LOW);
    }
    else if(request == "GET /c HTTP/1.1")
    {
      digitalWrite(relay3, LOW);
    }
    else if(request == "GET /D HTTP/1.1")
    {
      digitalWrite(relay4, LOW);
    }
    else if(request == "GET /d HTTP/1.1")
    {
      digitalWrite(relay4, LOW);
    }
  }
}
