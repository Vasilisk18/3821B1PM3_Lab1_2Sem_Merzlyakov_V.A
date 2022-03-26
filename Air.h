#pragma once
#include "transport.h"
#include <string>

using namespace std;

class Air : public transport
{
public:
  virtual void Gasoline();
  Air(string wings, double wheels, int power, string color);
  string getWings();
  void setWings(string enWings);
  double getWheels();
  void setWheels(double enWheels);
protected:
  string wings;
  double wheels;
};