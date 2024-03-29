#include "weatherstation.h"

WeatherStation::WeatherStation()
{
    std::clog << "Construct class WeatherStation " << this << std::endl;
}

WeatherStation::~WeatherStation()
{
    std::clog << "Destruct class WeatherStation " << this << std::endl;
}

void WeatherStation::registerObserver(IObserver *obs)
{
    observers.push_back(obs);
}

void WeatherStation::removeObserver(IObserver *obs)
{
    if(observers.size() > 0)
    {
        observers.remove(obs);
    }
}

void WeatherStation::notifyObserver()
{
    for(auto obs : observers)
    {
        obs->update(temperature, humidity, pressure);
    }
}

void WeatherStation::measurementsChanged()
{
    this->notifyObserver();
}

void WeatherStation::setMeasurements(float temp, float hum, float press)
{
    this->temperature = temp;
    this->humidity = hum;
    this->pressure = press;
    this->measurementsChanged();
}
