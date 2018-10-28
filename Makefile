FLAGS = -g

all: decorator

clean: 
	rm *.o ./decorator

clean_objects: 
	rm *.o

decorator: IOCipher.o Decorator.o toNumberDecorator.o Client.o
	g++ IOCipher.o Decorator.o toNumberDecorator.o Client.o -o decorator $(FLAGS) 
	make clean_objects

IOCipher.o: IOCipher.cpp IOCipher.hpp IO.hpp
	g++ -c IOCipher.cpp

Decorator.o: Decorator.cpp Decorator.hpp IO.hpp
	g++ -c Decorator.cpp

toNumberDecorator.o: toNumberDecorator.cpp toNumberDecorator.hpp Decorator.hpp
	g++ -c toNumberDecorator.cpp

Client.o: Client.cpp Client.hpp IO.hpp
	g++ -c Client.cpp


