//Control LED Using Blynk 2.0/Blynk IOT
#define BLYNK_TEMPLATE_NAME "Control LED"
#define BLYNK_DEVICE_NAME "Control LED"
#define BLYNK_AUTH_TOKEN "wccpDawZxjhhuFFIGGe0x9MStBWIpvt3"
#define BLYNK_TEMPLATE_ID "TMPL3kT9fMtJy"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wifi Username";  // Enter your Wifi Username
char pass[] = "Wifi password";  // Enter your Wifi password

int ledpin = 2;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
