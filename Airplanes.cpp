#include <iostream>
#include <string>
#include "Airplanes.h"

using namespace std;

void Airplanes::Gasoline()
{
  cout << "InfusionOfGasoline" << endl;
}

string Airplanes::getSize()
{
  return size;
}

void Airplanes::setSize(string enSize)
{
  if (enSize != "")
  {
    size = enSize;
  }
}

double Airplanes::getWingspan()
{
  return wingspan;
}

void Airplanes::setWingspan(double enWingspan)
{
  if (enWingspan != 0.0)
  {
    wingspan = enWingspan;
  }
}