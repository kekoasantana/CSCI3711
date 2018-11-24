#include "Population.h"

Population::Population() {
	fishes = new Fish*[max_fishes];
	this->size = 0;
}

Population::Population(Fish** fishes) {
	fishes = new Fish*[max_fishes];
}

Population::~Population() {
	delete [] fishes;
	fishes = NULL;
}

void Population::add(Fish* fish) {
	fishes[size] = fish;
	size++;
}

void Population::remove(Fish* fish) {
	int index = 0;
	while((index < size) && (fish != fishes[index])) {
		index++;
	} 
	
	if (index == size) {
		std::cout << "The fish was not in the population" << std::endl;
	} else {
		size --;
		fishes[index] = fishes[size];
	}
}

int Population::getSize() const {
	return this->size;
}

Fish* Population::getFish(int index) const {
	return fishes[index];
}
