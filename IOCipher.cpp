#include "IOCipher.hpp"
#include <iostream>
#include <string>


using namespace std;

string IOCipher::readPassword(){
    string password;
	getline (std::cin,password);
    return password;
}
string IOCipher::cryptPassword(string password){
    return password; //Defult no crypt
}
void IOCipher::printPassword(string password){
    cout << password << endl;    
}

