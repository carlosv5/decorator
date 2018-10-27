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

	string readPassword();
	string cryptPassword(string password);
	void printPassword(string password);
protected:
	
};

#endif