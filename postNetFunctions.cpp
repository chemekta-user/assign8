#include "functions.h"    // Include the .h file
// Always use " " for your own header files, not < >

// Don't need to include <string> here because it's included in the .h file

using namespace std;  // OK to use in .cpp files

// Define the functions declared in the .h file

int getAnswer() {
  return 42;
}

string getGreeting() {
  return "Hello, World!";
}