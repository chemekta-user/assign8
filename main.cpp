#include <iostream>
#include "postNetFunctions.h"    //Include your .h file
#include <string>
#include <algorithm>

using namespace std;

int main() {
    std::string s = "New York,NY,56458";
    std::cout << formatAddress(s) << "\n";
}