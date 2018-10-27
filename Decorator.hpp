#ifndef DECORATOR
#define DECORATOR
#include "IO.hpp"

class Decorator : public IO
{
public:
	Decorator(IO* io);
	~Decorator() {};
	
protected:
	string readPassword();
	string cryptPassword(string password);
	void printPassword(string password);
	IO* io;
};

#endif