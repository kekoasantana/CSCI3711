#ifndef READ_H
#define READ_H

#include <stdio.h>

unsigned char* read(const char* file, char* ppmIndicator, int* width, int* height, int* maximum);

#endif