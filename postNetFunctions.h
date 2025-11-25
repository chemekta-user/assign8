#ifndef FUNCTIONS_H  // Change to a unique name based on your file name
#define FUNCTIONS_H  // Change to match the above

// Need to include <string> to use strings in function declarations
#include <string>
#include <algorithm>

// Don't use 'using namespace std;' in header files

/** @brief 
 *  @return return the new string
 */
std::string trim(const std::string& s);


/** @brief Function that returns a greeting
 *  @return "Hello, World!"
 */
std::string formatAddress(const std::string& input);
// use std::string because we didn't do 'using namespace std;'

#endif