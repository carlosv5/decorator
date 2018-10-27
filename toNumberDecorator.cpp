#include "toNumberDecorator.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

string ToNumberDecorator::cryptPassword(string password){
  replace( password.begin(), password.end(), 'a', '4' );
  replace( password.begin(), password.end(), 'e', 'e' );
  replace( password.begin(), password.end(), 'i', '1' );
  replace( password.begin(), password.end(), 'o', '*' );
  return password;
}


