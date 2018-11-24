all: main

main.o: main.cc Log.h Angle.h Fish.h Population.h DrunkenFish.h FlippyFish.h
	g++ -c -Werror main.cc
	
Log.o: Log.cc Log.h
	g++ -c -Werror Log.cc
	
Angle.o: Angle.cc Angle.h
	g++ -c -Werror Angle.cc
	
Fish.o: Fish.cc Fish.h
	g++ -c -Werror Fish.cc
	
Population.o: Population.cc Population.h
	g++ -c -Werror Population.cc
	
DrunkenFish.o: DrunkenFish.cc DrunkenFish.h
	g++ -c -Werror DrunkenFish.cc
	
FlippyFish.o: FlippyFish.cc FlippyFish.h
	g++ -c -Werror FlippyFish.cc
	
main: main.o Log.o Angle.o Fish.o Population.o DrunkenFish.o FlippyFish.o
	g++ -o main.exe main.o Log.o Angle.o Fish.o Population.o DrunkenFish.o FlippyFish.o