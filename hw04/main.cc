#include <cstdio>
#include <iostream>
#include <stdio.h>
#include "read.h"
#include "write.h"

int main(int argc, char** argv) {
	char file1[25] = "test.ppm";
	char file2[25] = "newImage.ppm";
	char ppmIndicator[5] = "\0";
	char nextLine[10] = "\0";
	int width = -1;
	int height = -1;
	int maximum = -1;
	
	unsigned char* array = read(file1, ppmIndicator, &width, &height, &maximum);
	write(file2, ppmIndicator, width, height, maximum, array);
	delete array;
}