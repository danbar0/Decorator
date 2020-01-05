#pragma once
#include <string>

using namespace std; 

class Burger {
public:
	string description = "Unknown Burger";

	virtual string getDescription(void) { return description; }

	virtual double cost(void) = 0;
};

class CondimentDecorator : public Burger {
public:
	virtual string getDescription(void) = 0; 

};