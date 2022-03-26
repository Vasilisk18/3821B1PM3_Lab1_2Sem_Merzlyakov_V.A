#pragma once
#include <string>

using namespace std;

class transport
{
public:
	virtual void Gasoline() = 0;
	transport(int power, string color);
	int getPower();
	void setPower(int enPower);
	string getColor();
	void setColor(string enColor);
protected:
	int power;
	string color;
};