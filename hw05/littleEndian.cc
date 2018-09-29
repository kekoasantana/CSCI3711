#include <cstdio>

int main(int argc, char** argv) {
	int x = 1;
	
	char *y = (char*)(&x);
	
	printf("%c\n", *y+48);
}
