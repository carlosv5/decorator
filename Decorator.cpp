#include "Decorator.hpp"
#include <iostream>
#include <string>

using namespace std;

Decorator::Decorator(IO* io) {
		this->io = io;
}

string Decorator::readPassword(){
    return io->readPassword();
}
string Decorator::cryptPassword(string password){
    return io->cryptPassword(password);
}
void Decorator::printPassword(string password){
	io->printPassword(password);
}

