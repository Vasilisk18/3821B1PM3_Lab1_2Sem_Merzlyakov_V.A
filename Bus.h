#pragma once
#include "Ground.h"
#include <string>

using namespace std;

class Bus : public Ground
{
public:
  virtual void Gasoline();
  int getMaxPassengers();
  void setMaxPassengers(int enMaxPassengers);
  int getFare();
  void setFare(int enFare);
protected:
  int maxPassengers;
  int fare;
};