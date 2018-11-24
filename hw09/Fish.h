#ifndef FISH_H
#define FISH_H
#include <cstdlib>
#include "Angle.h"
#include "Population.h"


class Fish {
	friend class Population;
private: 
	double x;
	double y;
	double speed;
	Angle dir;
	Angle turnRate;
	Population* pop;

public:	
	Fish();
	Fish(double x, double y, double speed, Angle dir, Angle turnRate, Population* pop);
	virtual ~Fish();
	void swim();
	double getX() const;
	double getY() const;
	double getSpeed() const;
	Angle getDir() const;
	Angle getTurnRate() const;
}; // end of fish class

#endif