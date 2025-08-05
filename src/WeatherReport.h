#ifndef WEATHERREPORT_H
#define WEATHERREPORT_H

#include <string>
#include "WeatherSensor.h"

std::string Report(const IWeatherSensor& sensor);

#endif