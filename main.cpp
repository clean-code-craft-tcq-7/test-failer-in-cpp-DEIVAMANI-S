#include "../src/misaligned.h"
#include "../src/tshirts.h"
#include "../src/WeatherReport.h"
#include "../src/WeatherSensor.h"
#include <iostream>

int main() {
    int size = 40;
    char result = getTshirtSize(size);
    std::cout << "T-shirt size for shoulder width " << size << " cm is: " << result << "\n";	
	
    printColorMap();
	
	testWeatherReport();
    return 0;
}