#pragma once
#include "Burger.hpp"

class Cheese : public CondimentDecorator {
private:

public: 
	Cheese(Burger* burger) {
		description = "cheese"; 
		this->burger = burger; 
		this->cost = .50; 
	}

};

class Avocado : public CondimentDecorator {
private:

public: 
	Avocado(Burger* burger) {
		description = "avocado";
		this->burger = burger;
		this->cost = 1.00; 
	}



};