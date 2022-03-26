#include <iostream>
#include <stdio.h>
#include "transport.h"
#include "Airplanes.h"
#include "Bus.h"
#include "Cars.h"
#include "Helicopters.h"
#include "Trucks.h"
#include "Air.h"
#include "Ground.h"
#include "SetOfTransport.h"
#include "Sportcars.h"

using namespace std;

int main()
{
  Ground Bugatti("Bugatti", 1.0, 5, "qwerty");
  Air McLaren("McLaren", 1.0, 5, "qwerty");

  setOfTransport sportcar;
  sportcar.AddTransport(&Bugatti);
  sportcar.AddTransport(&McLaren);
  sportcar.Print();

  return 0;
}
