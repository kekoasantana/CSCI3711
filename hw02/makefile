all: main

main.o: main.cc mathOperations.h
	g++ -c -Werror main.cc

mathOperations.o: mathOperations.cc mathOperations.h
	g++ -c -Werror mathOperations.cc
	
main: main.o mathOperations.o
	g++ -o main.exe main.o mathOperations.o