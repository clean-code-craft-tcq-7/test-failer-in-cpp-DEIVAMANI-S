#ifndef WEATHERSENSORSTUB_H
#define WEATHERSENSORSTUB_H

#include "../src/WeatherSensor.h"

// Basic stub
class SensorStub : public IWeatherSensor {
public:
    double TemperatureInC() const override { return 26; }
    int Precipitation() const override { return 70; }
    int Humidity() const override { return 72; }
    int WindSpeedKMPH() const override { return 52; }
};

// Exposes bug: High precipitation, but low wind
class HeavyRainNoStormStub : public IWeatherSensor {
public:
    double TemperatureInC() const override { return 28; }
    int Precipitation() const override { return 90; }
    int Humidity() const override { return 80; }
    int WindSpeedKMPH() const override { return 30; }
};

#endif