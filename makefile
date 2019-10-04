main: main.o Car.o Jet.o Skateboard.o TurboProp.o Bicycle.o
	g++ -std=c++11 -o main main.o Car.o Jet.o Skateboard.o TurboProp.o Bicycle.o
	chmod 755 main

Car.o: Car.h Car.cpp
	g++ -std=c++11 -c Car.cpp

Jet.o: Jet.h Jet.cpp
	g++ -std=c++11 -c Jet.cpp

Skateboard.o: Skateboard.h Skateboard.cpp
	g++ -std=c++11 -c Skateboard.cpp

TurboProp.o: TurboProp.h TurboProp.cpp
	g++ -std=c++11 -c TurboProp.cpp

Bicycle.o: Bicycle.h Bicycle.cpp
	g++ -std=c++11 -c Bicycle.cpp

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

clean:
	rm -f *.o main
