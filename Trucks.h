#pragma once
#include "Ground.h"
#include <string>

using namespace std;

class Trucks : public Ground
{
public:
  virtual void Gasoline();
  double getCarrying();
  void setCarrying(double enCarrying);
  string getBrand();
  void setBrand(string enLength);
protected:
  double carrying;
  string brand;
};