#include "WeatherReport.h"

std::string Report(const IWeatherSensor& sensor) {
    int precipitation = sensor.Precipitation();
    std::string report = "Sunny Day";

    if (sensor.TemperatureInC() > 25) {
        if (precipitation >= 20 && precipitation < 60) {
            report = "Partly Cloudy";
        } else if (precipitation >= 60) {
            report = sensor.WindSpeedKMPH() > 50 ?
                     "Alert, Stormy with heavy rain" :
                     "Rainy Day";
        }
    }
    return report;
}