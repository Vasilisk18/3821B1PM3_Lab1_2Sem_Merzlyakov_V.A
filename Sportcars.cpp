#include <iostream>
#include <string>
#include "Sportcars.h"

using namespace std;

void Sportcars::Gasoline()
{
  cout << "InfusionOfGasoline" << endl;
}

string Sportcars::getName()
{
  return name;
}

void Sportcars::setName(string enName)
{
  if (enName != "")
  {
    name = enName;
  }
}
