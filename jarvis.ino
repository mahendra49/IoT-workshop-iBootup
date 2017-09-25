#include<ESP8266WiFi.h>
#define BLYNK_PRINT Serial
#include<BlynkSimpleEsp8266.h>
#include<Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, 12, NEO_GRB+NEO_KHZ800);
char auth[] = "8bd839df28ca40d9b01d47c3bc643140";
char ssid[] = "BDA_PVP";
char pass[] = "ibootup1";

void red(){
  uint32_t red_color;
red_color = strip.Color(255,0,0);
  for(uint16_t k=0 ; k < strip.numPixels() ; k++ ){
          strip.setPixelColor(k,red_color);
  
    }
    strip.show();}
BLYNK_WRITE(V1)
{
  int recieved_value = param.asInt();
  Serial.print("Recieved value :");
  Serial.println(recieved_value);
  if(recieved_value==1)
    red();
  }

void setup() {
strip.begin();
strip.setBrightness(128);
Serial.begin(115200);
  Blynk.begin(auth , ssid, pass);

}

void loop() {
 Blynk.run();
}
