#include <iostream>
#include <string>
#include "Trucks.h"

using namespace std;

void Trucks::Gasoline()
{
  cout << "InfusionOfGasoline" << endl;
}

double Trucks::getCarrying()
{
  return carrying;
}

void Trucks::setCarrying(double enCarrying)
{
  if (enCarrying != 0.0)
  {
    carrying = enCarrying;
  }
}
string Trucks::getBrand()
{
  return brand;
}

void Trucks::setBrand(string enBrand)
{
  if (enBrand != " ")
  {
    brand = enBrand;
  }
}
