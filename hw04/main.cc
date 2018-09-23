#include <cstdio>
#include <iostream>
#include <stdio.h>
#include "read.h"
#include "write.h"

int main(int argc, char** argv) {
	char file[25] = "test.ppm";
	char ppmIndicator[5] = "\0";
	char nextLine[10] = "\0";
	int width = -1;
	int height = -1;
	int maximum = -1;
	
	write(file, read(file, ppmIndicator, &width, &height, &maximum, nextLine));
}
