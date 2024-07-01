#define BLYNK_TEMPLATE_ID           "TMPL2hVxElbUc"
#define BLYNK_TEMPLATE_NAME         "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "84yrylJ41hR0sE3Q9GtCk0lUdlxjHlBD"

#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


char ssid[] = "CLARO_zZ5PX5";
char pass[] = "5E44c8f767";

BlynkTimer timer;

BLYNK_WRITE(V0)
{
 
  int value = param.asInt();


  Blynk.virtualWrite(V1, value);
}


BLYNK_CONNECTED()
{
  // Change Web Link Button message to "Congratulations!"
  Blynk.setProperty(V3, "offImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations.png");
  Blynk.setProperty(V3, "onImageUrl",  "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations_pressed.png");
  Blynk.setProperty(V3, "url", "https://docs.blynk.io/en/getting-started/what-do-i-need-to-blynk/how-quickstart-device-was-made");
}
