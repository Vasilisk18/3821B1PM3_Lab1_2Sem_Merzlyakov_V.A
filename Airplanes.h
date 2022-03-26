#pragma once
#include "Air.h"
#include <string>

using namespace std;

class Airplanes : public Air
{
public:
  virtual void Gasoline();
  string getSize();
  void setSize(string enSize);
  double getWingspan();
  void setWingspan(double enWingspan);
protected:
  string size;
  double wingspan;
};