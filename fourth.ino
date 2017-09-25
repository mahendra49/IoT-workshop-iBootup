#include<ESP8266WiFi.h>
#define SSID "BDA_PVP"
#define SSID_PASSWORD "ibootup1"
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
WiFi.begin(SSID, SSID_PASSWORD);
while (WiFi.status() != WL_CONNECTED)
{
  delay(500);
  Serial.print(".");
  }
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
