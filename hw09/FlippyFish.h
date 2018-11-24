#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H

#include "Angle.h"
#include <cstdlib>
#include "Fish.h"
#include "Population.h"

class FlippyFish : public Fish {
	friend class Population;
private:
	bool type;
	
public:
	FlippyFish();
	FlippyFish(double x, double y, double speed, Angle dir, Angle turnRate, Population* pop, bool type);
	virtual ~FlippyFish();
	
	void swim();
	bool getType();
};

#endif