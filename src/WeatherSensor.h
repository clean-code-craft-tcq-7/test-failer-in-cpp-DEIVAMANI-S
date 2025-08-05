#ifndef WEATHERSENSOR_H
#define WEATHERSENSOR_H

class IWeatherSensor {
public:
    virtual double TemperatureInC() const = 0;
    virtual int Precipitation() const = 0;
    virtual int Humidity() const = 0;
    virtual int WindSpeedKMPH() const = 0;
    virtual ~IWeatherSensor() {}
};

#endif