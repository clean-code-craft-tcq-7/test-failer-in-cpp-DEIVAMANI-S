#include <iostream>
#include <assert.h>
#include "../src/WeatherReport.h"
#include "../test/WeatherSensorStub.h"

void TestRainy() {
    SensorStub sensor;
    std::string report = Report(sensor);
    std::cout << "Rainy Test: " << report << std::endl;
    assert(report.find("rain") != std::string::npos);
}

void TestHighPrecipitation() {
    HeavyRainNoStormStub sensor;
    std::string report = Report(sensor);
    std::cout << "High Precipitation Test: " << report << std::endl;
    assert(report.find("Rainy") != std::string::npos);  // Catch the original bug
}

void testWeatherReport() {
    std::cout << "\nWeather report test\n";
    TestRainy();
    TestHighPrecipitation();
    std::cout << "All tests passed\n";
}