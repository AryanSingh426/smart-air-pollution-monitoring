#include <DHT.h>

#define MQ135_PIN 34
#define MQ7_PIN   35
#define DHT_PIN   4
#define DHT_TYPE  DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();

  pinMode(MQ135_PIN, INPUT);
  pinMode(MQ7_PIN, INPUT);

  Serial.println("Smart Air Pollution Monitoring");
  Serial.println("--------------------------------");
}

void loop() {

  // Read MQ-135
  int mq135Value = analogRead(MQ135_PIN);

  // Read MQ-7
  int mq7Value = analogRead(MQ7_PIN);

  // Read DHT11
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.println("--------------------------------");

  Serial.print("MQ-135 Raw Value: ");
  Serial.println(mq135Value);

  Serial.print("MQ-7 Raw Value:   ");
  Serial.println(mq7Value);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("DHT11: Sensor Error");
  } 
  else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    Serial.print("Humidity:    ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  delay(2000);
}