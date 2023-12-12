#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL6pw9CIjlg"
#define BLYNK_TEMPLATE_NAME "latihanKendaliled"
#define BLYNK_AUTH_TOKEN "g5AWgiGx5vRpPe4WuxNFliMYiRVtZyES"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "yolo";
char pass[] = "Temp&&391";

BLYNK_WRITE(V0) {
  digitalWrite(D4, param.asInt());
}

void setup()
{
  pinMode(D4, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
}

void loop()
{
  Blynk.run();
}

