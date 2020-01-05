#pragma once
#include <string>

using namespace std; 

class Burger {
public:
	string description = "Unknown Burger";

	virtual string getDescription(void) { return description; }
	virtual double getCost(void) = 0;
};

class CondimentDecorator : public Burger {
public:
	Burger* burger;
	double cost = 0; 
	string description = "Unknown comdiment"; 

	string getDescription(void) {
		return burger->getDescription() + this->description;
	}

	double getCost(void) {
		return burger->getCost() + this->cost;
	}

};