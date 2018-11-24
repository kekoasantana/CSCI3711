#include "Fish.h"

Fish::Fish() 
    : dir(0),
	turnRate(0) {
	x = 0;
	y = 0;
	speed = 1;
}

Fish::Fish(double x, double y, double speed, Angle dir, Angle turnRate, Population* pop) {
	this->x = x;
	this->y = y;
	this->speed = speed;
	this->dir = dir;
	this->turnRate = turnRate;
	this->pop = pop;
	pop->add(this);
}

Fish::~Fish() {
	pop->remove(this);
}

void Fish::swim() {
	int choice = rand() % 3;
	if (choice == 0) {
		dir -= turnRate;
	} else if (choice == 2) {
		dir += turnRate;
	}
	x += speed * dir.getCos();
	y += speed * dir.getSin();
}

double Fish::getX() const {
	return this->x;
}

double Fish::getY() const {
	return this->y;
}

double Fish::getSpeed() const {
	return this->speed;
}

Angle Fish::getDir() const {
	return this->dir;
}

Angle Fish::getTurnRate() const {
	return this->turnRate;
}