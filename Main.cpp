// DecoratorPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include "IO.h"
#include "UnderlineDecorator.h"
#include "toCapsDecorator.h"

int main()
{
    std::cout << "Hello World!\n"; 
	std::string hola = "hola";

	//UnderlineDecorator* io = new UnderlineDecorator(new IO());
	//io->printString(hola);
	
	UnderlineDecorator* o = new UnderlineDecorator(new UnderlineDecorator(new IO()));
	o->printString(hola);
	



	std::vector<IO*> vec;

}