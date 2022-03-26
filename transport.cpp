#include <iostream>
#include <string>
#include "transport.h"

using namespace std;

void transport::Gasoline()
{
  cout << "InfusionOfGasoline" << endl;
}

transport::transport(int power, std::string color)
{
  this->power = power;
  this->color = color;
}

int transport::getPower()
{
  return power;
}

void transport::setPower(int enPower)
{
  if (enPower > 0)
  {
    power = enPower;
  }
}

std::string transport::getColor()
{
  return color;
}

void transport::setColor(std::string enColor)
{
  if (enColor != "")
  {
    color = enColor;
  }
}