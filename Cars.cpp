#include <iostream>
#include <string>
#include "Cars.h"

using namespace std;

void Cars::Gasoline()
{
  cout << "InfusionOfGasoline" << endl;
}

string Cars::getGearbox()
{
  return gearbox;
}

void Cars::setGearbox(string enGearbox)
{
  if (enGearbox != "")
  {
    gearbox = enGearbox;
  }
}
double Cars::getMaxSpeed()
{
  return maxSpeed;
}

void Cars::setMaxSpeed(double enMaxSpeed)
{
  if (enMaxSpeed != 0.0)
  {
    maxSpeed = enMaxSpeed;
  }
}