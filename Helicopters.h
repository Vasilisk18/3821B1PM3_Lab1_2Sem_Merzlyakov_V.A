#pragma once
#include "Air.h"
#include <string>

using namespace std;

class Helicopters : public Air
{
public:
  virtual void Gasoline();
  double getFlightAltitude();
  void setFlightAltitude(double enFlightAltitude);
  double getBladeLength();
  void setBladeLength(double enBladeLegth);
protected:
  double bladeLength;
  double flightAltitude;
};