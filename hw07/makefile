all: main

main.o: main.cc Angle.h
	g++ -c -Werror main.cc

Angle.o: Angle.cc Angle.h
	g++ -c -Werror Angle.cc
	
main: main.o Angle.o
	g++ -o main.exe main.o Angle.o