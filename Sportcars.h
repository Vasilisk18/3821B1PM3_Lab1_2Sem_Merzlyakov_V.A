#pragma once
#include "Cars.h"
#include <string>

using namespace std;

class Sportcars : public Cars
{
public:
  virtual void Gasoline();
  string getName();
  void setName(string enName);
protected:
  string name;
};