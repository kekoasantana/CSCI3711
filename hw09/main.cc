#include <iostream>
#include <string>
#include <math.h>
#include "Log.h"
#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"

int main() {
	Log l = Log::getInstance();
	bool type;
	
	// populating pop with fish
	Population pop;
	FlippyFish f1(0,0,3,Angle(45), Angle(15), &pop, false);
	FlippyFish f2(0,0,5,Angle(30), Angle(30), &pop, false);
	DrunkenFish f3(0,0,2,Angle(15), Angle(90), &pop, true);
	DrunkenFish f4(0,0,6,Angle(60), Angle(15), &pop, true);
	
	// time measurement in days
	int day = 0;
	
	while(pop.getSize()>0) { // while there are still fish in the population
		day++;
		std::cout << "There are: " << pop.getSize();
		std::cout << " fish in the population on day " << day << std::endl;
		for (int i = 0; i < pop.getSize(); i++) {
			pop.getFish(i)->swim();
			double distance = sqrt(pow(pop.getFish(i)->getX(),2) + (pow(pop.getFish(i)->getY(),2)));
			if(distance >= 100) {
				pop.getFish(i)->~Fish();
			} // end if
			if (i > 0) {
				if (day % i == 3) {
					new Fish();
				} // end if
			} // end if
		} // end for loop 
	} // end main while
	type = pop.getFish(0)->getType();
	if (type) {
		std::cout << "Last fish left is a drunken fish" << std::endl;
	} else {
		std::cout << "Last fish left is a flippy fish" << std::endl;
	}
}