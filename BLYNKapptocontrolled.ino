#include<ESP8266WiFi.h>
#include<Adafruit_NeoPixel.h>
#include<ESP8266WebServer.h>
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, 12, NEO_GRB+NEO_KHZ800);
#include<ESP8266WiFi.h>
#define SSID "BDA_PVP"
#define SSID_PASSWORD "ibootup1"
ESP8266WebServer server(80);
void red(){
  uint32_t party1_colour,party2_colour,party3_colour;
while(1)
{
party1_colour = strip.Color(255,0,0);
        
   for(uint16_t k=0 ;k<10 ; k++ ){
          strip.setPixelColor(k,party1_colour);
  
    }
    strip.show();
    party3_colour=strip.Color(0,0,0);
   party1_colour = strip.Color(0,255,0);
        
   for(uint16_t k=0 ;k<10 ; k++ ){
          strip.setPixelColor(k,party1_colour);
  
    }
    strip.show();
     party3_colour=strip.Color(0,0,0);

party1_colour = strip.Color(0,0,255);
        
   for(uint16_t k=0 ;k<10 ; k++ ){
          strip.setPixelColor(k,party1_colour);
  
    }
    strip.show();
     party3_colour=strip.Color(0,0,0);



}
  }
 void mylight()
  {
     if(server.arg("state") == "red")
    {
    red();
    server.send(200 , "text/plain" , "message");
    }
  }
  

void setup() {
  // put your setup code here, to run once:
server.begin();
strip.begin();
Serial.begin(115200);
WiFi.begin(SSID, SSID_PASSWORD);
while (WiFi.status() != WL_CONNECTED)
{
  delay(500);
  Serial.print(".");
  }
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  server.on("/light", mylight);


}
 
void loop() {
  // put your main code here, to run repeatedly:
server.handleClient();
} 
