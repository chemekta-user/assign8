#include "postNetFunctions.h" //Include your .h file
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  std::string s = "New York,NY,56458";
  std::cout << formatAddress(s);
}