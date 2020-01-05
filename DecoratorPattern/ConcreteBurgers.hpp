#include "Burger.hpp"
#include "pch.h"

class BeefBurger : public Burger {
public:
	BeefBurger(void) {
		description = "Beef Burger"; 
	}

	double cost(void) {
		return 5.00; 
	}
};

class TurkeyBurger : public Burger {
public:
	TurkeyBurger(void) {
		description = "Turkey Burger";
	}

	double cost(void) {
		return 6.00; 
	}
};

class BeanBurger : public Burger {
public:
	BeanBurger(void) {
		description = "Bean Burger";
	}

	double cost(void) {
		return 7.00; 
	}
};