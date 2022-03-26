#include <iostream>
#include <string>
#include "Air.h"

using namespace std;

void Air::Gasoline()
{
  cout << "Your choice is Air" << endl;
}
Air::Air(string wings, double wheels, int power, string color) : transport(power, color)
{
  this->wings = wings;
  this->wheels = wheels;
}
string Air::getWings()
{
  return wings;
}

void Air::setWings(string enWings)
{
  if (enWings != "")
  {
    wings = enWings;
  }
}

double Air::getWheels()
{
  return wheels;
}

void Air::setWheels(double enWheels)
{
  if (enWheels != 0.0)
  {
    wheels = enWheels;
  }
}