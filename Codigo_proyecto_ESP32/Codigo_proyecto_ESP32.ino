#define BLYNK_TEMPLATE_ID "TMPL2zwnea0mX"
#define BLYNK_TEMPLATE_NAME "Carro"
#define BLYNK_AUTH_TOKEN "YHv41Ui_nifjtzyJOy3c_lzmJrXIdvhc"

// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "CLARO_zZ5PX5";
char pass[] = "5E44C8F767";

int IN1 = 4;
int IN2 = 5;
int IN3 = 12;
int IN4 = 13;


BLYNK_WRITE(V1) { //move forward  
  digitalWrite(IN2, param.asInt());
  digitalWrite(IN4, param.asInt());
}

BLYNK_WRITE(V2) { //move backward
  digitalWrite(IN1, param.asInt());
  digitalWrite(IN3, param.asInt());
}

BLYNK_WRITE(V3) { //turn left
  digitalWrite(IN2, param.asInt());
  digitalWrite(IN3, param.asInt());
}

BLYNK_WRITE(V4) { //turn right
  digitalWrite(IN1, param.asInt());
  digitalWrite(IN4, param.asInt());
}


void setup()
{
  // Debug console
  Serial.begin(115200);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  //Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 8080);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();

  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}