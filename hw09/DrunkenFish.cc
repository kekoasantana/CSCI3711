#include "DrunkenFish.h"

DrunkenFish::DrunkenFish()
: Fish()
{
}

DrunkenFish::DrunkenFish(double x, double y, double speed, Angle dir, Angle turnRate, Population* pop, bool type)
	: Fish(x, y, speed, dir, turnRate, pop) {
		bool type = type;
}

DrunkenFish::~DrunkenFish() {
	pop->remove(this);
}

void DrunkenFish::swim() {
	int choice = rand() % 4;
	
	if(     choice == 0) x += speed;
	else if(choice == 1) y += speed;
	else if(choice == 2) x -= speed;
	else				 y -= speed;
}

bool DrunkenFish::getType() {
	return this->type;
}