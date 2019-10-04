main: main.o Car.o Jet.o Skateboard.o TurboProp.o Bicycle.o
	g++ -o main main.o Car.o Jet.o Skateboard.o TurboProp.o Bicycle.o
	chmod 755 main

Car.o: Car.h Car.cpp
	g++ -c Car.cpp

Jet.o: Jet.h Jet.cpp
	g++ -c Jet.cpp

Skateboard.o: Skateboard.h Skateboard.cpp
	g++ -c Skateboard.cpp

TurboProp.o: TurboProp.h TurboProp.cpp
	g++ -c TurboProp.cpp

Bicycle.o: Bicycle.h Bicycle.cpp
	g++ -c Bicycle.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f *.o main
