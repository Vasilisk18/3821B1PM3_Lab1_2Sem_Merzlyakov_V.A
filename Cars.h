#pragma once
#include "Ground.h"
#include <string>

using namespace std;

class Cars : public Ground
{
public:
  virtual void Gasoline();
  string getGearbox();
  void setGearbox(string enGearbox);
  double getMaxSpeed();
  void setMaxSpeed(double enMaxSpeed);
protected:
  string gearbox;
  double maxSpeed;
};