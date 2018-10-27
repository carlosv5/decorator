#ifndef IOCIPHER
#define IOCIPHER
#include <iostream>
#include <string>
#include "IO.hpp"
using namespace std;

class IOCipher : public IO
{
public:
	
	IOCipher();
	~IOCipher();

	string readPassword();
	string cryptPassword(string password);
	void printPassword(string password);
protected:
	
};

#endif