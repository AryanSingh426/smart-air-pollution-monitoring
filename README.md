# Smart Air Pollution Monitoring (SAM)

An IoT-based air-quality monitoring project using ESP32, MQ-135, and DHT11 sensors, with plans for cloud-based data visualization and AI-assisted air-quality trend prediction.

## Project Overview

The goal of this project is to collect environmental sensor readings, monitor changes over time, and develop a platform for analyzing air-quality trends.

## Hardware

- ESP32 development board
- MQ-135 gas sensor
- DHT11 temperature and humidity sensor
- Breadboard and jumper wires
- USB power supply

## System Architecture

1. Collect gas-sensor readings using the MQ-135.
2. Measure temperature and humidity using the DHT11.
3. Process and transmit readings using the ESP32.
4. Store and visualize historical data.
5. Explore machine-learning models for future air-quality trend prediction.

## Current Status

- [ ] Sensor integration and testing
- [ ] ESP32 data collection
- [ ] Cloud connectivity and dashboard
- [ ] Historical data collection
- [ ] AI-based trend prediction

## Important Limitations

The MQ-135 provides a gas-sensitive response; it does not directly measure PM2.5 or PM10. Reliable AQI reporting requires suitable pollutant measurements and an appropriate calculation method. AI predictions will be developed after collecting and validating sufficient data.

## Future Improvements

- Cloud dashboard and historical charts
- Data analysis and anomaly detection
- Machine-learning-based trend prediction
- Improved sensor calibration and validation

## Author

Aryan Singh

