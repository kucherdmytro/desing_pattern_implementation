#include "forecastdisplay.h"

ForecastDisplay::ForecastDisplay(WeatherStation &weatherData)
{
    std::clog << "Construct class ForecastDisplay " << this << std::endl;
    weatherData.registerObserver(this);
}

ForecastDisplay::~ForecastDisplay()
{
    std::clog << "Destruct class ForecastDisplay " << this << std::endl;
}

void ForecastDisplay::display()
{
    if (this->pressure < 50)
    {
        std::cout << "Forecast: Rainy day" << std::endl;
    }
    else if (this->pressure >= 50 || this->pressure <= 70)
    {
        std::cout << "Forecast: Cloudy day" << std::endl;
    }
    else
    {
        std::cout << "Forecast: Sunny day" << std::endl;
    }
}

void ForecastDisplay::update(float temp, float humidity, float pressure)
{
    humidity = 0;
    temp = 0;
    this->pressure = pressure;
    this->display();
}
