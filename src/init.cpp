#include <Arduino.h>
#include "WiFi.h"
//#include "ESPAsyncWebServer.h"
#include "SPIFFS.h"
#include "constants.h"
#include "wifi_credentials.h"

void init() {
    // Serial port for debugging purposes
    Serial.begin(SERIAL_DEBUG);
    pinMode(LED_PIN, OUTPUT);

    // Initialize SPIFFS
    if(!SPIFFS.begin(true)){
        Serial.println("An Error has occurred while mounting SPIFFS");
        return;
    }

    // Connect to Wi-Fi
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi..");
    }

    // Print ESP32 Local IP Address
    Serial.println(WiFi.localIP());

}