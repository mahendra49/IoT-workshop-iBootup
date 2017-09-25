#define BLYNK_PRINT Serial
#include<BlynkSimpleEsp8266.h>
#include<ESP8266WiFi.h>

char auth[] = "8bd839df28ca40d9b01d47c3bc643140";
char ssid[] = "BDA_PVP";
char pass[] = "ibootup1";


void setup() {
  Serial.begin(115200);
  Blynk.begin(auth , ssid, pass);

}

void loop() {
  
Blynk.run();
}
