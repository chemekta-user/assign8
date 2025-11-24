#ifndef FUNCTIONS_H  // Change to a unique name based on your file name
#define FUNCTIONS_H  // Change to match the above

// Need to include <string> to use strings in function declarations
#include <string>

// Don't use 'using namespace std;' in header files

/** @brief Example function declaration
 *  @return the number 42
 */
int getAnswer();

/** @brief Function that returns a greeting
 *  @return "Hello, World!"
 */
std::string getGreeting();
// use std::string because we didn't do 'using namespace std;'

#endif