#ifndef TO_NUMBER_DECORATOR
#define TO_NUMBER_DECORATOR
#include <iostream>
#include <string>
#include "Decorator.hpp"
#include "IO.hpp"
using namespace std;

class ToNumberDecorator : public Decorator
{
public:
	ToNumberDecorator(IO* io) : Decorator(io) {};
	~ToNumberDecorator() {};
	string cryptPassword(string password);

};

#endif