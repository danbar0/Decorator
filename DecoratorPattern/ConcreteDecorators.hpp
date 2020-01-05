#pragma once
#include "Burger.hpp"

class Cheese : public CondimentDecorator {
private:
	Burger* burger;

public: 
	Cheese(Burger* burger) {
		this->burger = burger; 
	}

	string getDescription(void) {
		return burger->getDescription() + " + cheese"; 
	}

	double cost(void) {
		return burger->cost() + .50; 
	}

};

class Avocado : public CondimentDecorator {
private:
	Burger* burger;

public: 
	Avocado(Burger* burger) {
		this->burger = burger;
	}

	string getDescription(void) {
		return burger->getDescription() + " + avocado";
	}

	double cost(void) {
		return burger->cost() + 1.00; 
	}

};