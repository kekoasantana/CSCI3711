#include "FlippyFish.h"

FlippyFish::FlippyFish()
: Fish()
{
}

FlippyFish::FlippyFish(double x, double y, double speed, Angle dir, Angle turnRate, Population* pop, bool type)
	: Fish(x, y, speed, dir, turnRate, pop) {
		bool type = type;
}

FlippyFish::~FlippyFish() {
	pop->remove(this);
}

void FlippyFish::swim() {
	Fish::swim();
}

bool FlippyFish::getType() {
	return this->type;
}