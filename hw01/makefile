all: main

area.o: area.cc area.h
	g++ -c -Werror area.cc
	
main.o: main.cc area.h
	g++ -c -Werror main.cc
	
main: main.o area.o
	g++ main.o area.o
