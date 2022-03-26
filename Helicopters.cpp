#include <iostream>
#include <string>
#include "Helicopters.h"

using namespace std;

void Helicopters::Gasoline()
{
  cout << "InfusionOfGasoline" << endl;
}

double Helicopters::getFlightAltitude()
{
  return flightAltitude;
}

void Helicopters::setFlightAltitude(double enFlightAltitude)
{
  if (enFlightAltitude != 0.0)
  {
    flightAltitude = enFlightAltitude;
  }
}
double Helicopters::getBladeLength()
{
  return bladeLength;
}

void Helicopters::setBladeLength(double enBladeLength)
{
  if (enBladeLength != 0.0)
  {
    bladeLength = enBladeLength;
  }
}