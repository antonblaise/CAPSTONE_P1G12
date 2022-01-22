
// Fill-in information from your Blynk Template here
//#define BLYNK_TEMPLATE_ID           "TMPLxxxxxx"
//#define BLYNK_DEVICE_NAME           "Device"
#define BLYNK_TEMPLATE_ID "TMPLxxxxxxx"
#define BLYNK_DEVICE_NAME "CAPSTONE"
#define BLYNK_AUTH_TOKEN "xxxxxxxxxxxxxxxxxxxxx"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

BLYNK_WRITE(V0) // Relay
{
  digitalWrite(15, param.asInt());
}

BLYNK_WRITE(V1) // LED
{
  digitalWrite(LED_BUILTIN, 1-param.asInt());
}

void setup()
{
  pinMode(15, OUTPUT);
  digitalWrite(15, LOW);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  
  
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
