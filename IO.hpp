#ifndef IOCLASS
#define IOCLASS
#include <iostream>
#include <string>
using namespace std;

class IO
{
public:
	
	IO();
	~IO();

	virtual string readPassword()= 0;
	virtual string cryptPassword(string password) = 0;
	virtual void printPassword(string password) = 0;
protected:
	
};

#endif