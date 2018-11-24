#ifndef POPULATION_H
#define POPULATION_H
#include <iostream>

class Fish;

class Population {
private:
	Fish** fishes;
	int size;
	int max_fishes = 1000000;
	
public:
	Population(); 
	Population(Fish** fishes);
	virtual ~Population();
	void add(Fish* fish);
	void remove(Fish* fish);
	int getSize() const;
	Fish* getFish(int index) const;

};

#endif