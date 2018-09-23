#include "read.h"

unsigned char* read(char* file, char* ppmIndicator, int* width, int* height, int* maximum, char* nextLine) {
	FILE* fp = fopen(file, "rb");

	fscanf(fp, "%s", ppmIndicator);
	printf("%s\n", ppmIndicator); 
	
	fscanf(fp, "%d %d", width, height);
	printf("%d\n%d\n", *width, *height);
	
	fscanf(fp, "%d", maximum);
	
	fscanf(fp, "%s", nextLine);
	
	unsigned char* array = new unsigned char[1271400];
	fread(array, sizeof(char), 1271400, fp);
	
	fclose(fp);
	
	return array;
}
