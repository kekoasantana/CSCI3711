all: main

main.o: main.cc read.h
	g++ -c -Werror main.cc
	
read.o: read.cc read.h
	g++ -c -Werror read.cc
	
write.o: write.cc write.h
	g++ -c -Werror write.cc

main: main.o read.o write.o
	g++ -o main.exe main.o read.o write.o