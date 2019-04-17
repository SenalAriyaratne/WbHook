#include "Adafruit_DHT_Particle.h" 

#define DHTPIN D2     

#define DHTTYPE DHT11    



DHT dht(DHTPIN, DHTTYPE);


void setup() {
  

  dht.begin(); // sets the pinMode
  
}

void loop() 
{

// Read temperature as Celsius
  float t = dht.getTempCelcius();

  Particle.publish("temp",String(t),PRIVATE);
  delay(30000);
}
