#include <iostream>
#include <string>
#include "Ground.h"

using namespace std;

void Ground::Gasoline()
{
  cout << "Your choice is Ground" << endl;
}

Ground::Ground(string wings, double wheels, int power, string color) : transport(power, color)
{
  this->wings = wings;
  this->wheels = wheels;
}
string Ground::getWings()
{
  return wings;
}

void Ground::setWings(string enWings)
{
  if (enWings != "")
  {
    wings = enWings;
  }
}

double Ground::getWheels()
{
  return wheels;
}

void Ground::setWheels(double enWheels)
{
  if (enWheels != 0.0)
  {
    wheels = enWheels;
  }
}