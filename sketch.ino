#include "ArduinoJson.h"
#include "EspMQTTClient.h"

EspMQTTClient client{
 "Wokwi-GUEST", 
  "",     
  "mqtt.tago.io",  
  "Default",      
  "90aeb3a3-f5ca-4ee7-aced-4f22fbe4e71f",       
  "esp",       
  1883             
};
void setup() {
  Serial.begin(9600);
  Serial.println("Conectando WiFi");
  while (!client.isWifiConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("WiFi Conectado");
  Serial.println("Conectando com Servidor MQTT");
  while (!client.isMqttConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("MQTT Conectado");
}

void onConnectionEstablished()
{}
char bufferJson[100];
int presenca = true;
void loop() {
  presenca = random(2); 
  bool presencaBool = presenca == 1; 

  StaticJsonDocument<300> documentoJson;
  documentoJson["variable"] = "presenca";
  documentoJson["value"] = presencaBool;
 
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  client.publish("PlantOn", bufferJson);
  delay(5000);
  client.loop();
}