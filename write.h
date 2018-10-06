#ifndef WRITE_H
#define WRITE_H

#include <stdio.h>
extern "C" {
#include "jpeglib.h"
}

void writeJPEG(const char* file, int width, int height, int quality, unsigned char* array);

#endif