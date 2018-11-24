#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H

#include "Angle.h"
#include <cstdlib>
#include "Fish.h"
#include "Population.h"

class DrunkenFish : public Fish {
	friend class Population;
private:
	bool type;
	
public:
	DrunkenFish();
	DrunkenFish(double x, double y, double speed, Angle dir, Angle turnRate, Population* pop, bool type);
	virtual ~DrunkenFish();
	
	virtual void swim();
	bool getType();
};

#endif