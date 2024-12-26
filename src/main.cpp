#include <Arduino.h>
#include <WiFi.h>

IPAddress apIP(192, 168, 1, 1);

void setup() {
    Serial.begin(115200);
    WiFi.mode(WIFI_AP);
    WiFi.softAPConfig(apIP, apIP, 
            IPAddress(255, 255, 255, 0));
    WiFi.softAP("APName");

    Serial.println("AP Started");
}

void loop() {
    Serial.printf("# of WiFi Clients : %d\n", WiFi.softAPgetStationNum());
    delay(1000);
}
