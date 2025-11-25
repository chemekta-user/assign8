#include "postNetFunctions.h"    // Include the .h file
// Always use " " for your own header files, not < >

// Don't need to include <string> here because it's included in the .h file

using namespace std;  // OK to use in .cpp files

// Define the functions declared in the .h file

std::string trim(const std::string& s) {
    size_t start = s.find_first_not_of(" \t");
    size_t end   = s.find_last_not_of(" \t");
    if (start == std::string::npos) return "";
    return s.substr(start, end - start + 1);
}

std::string formatAddress(const std::string& input) {
    
    size_t comma1 = input.find(',');
    size_t comma2 = input.find(',', comma1 + 1);

    if (comma1 == std::string::npos || comma2 == std::string::npos)
        return 0;

    std::string city  = trim(input.substr(0, comma1));
    std::string state = trim(input.substr(comma1 + 1, comma2 - comma1 - 1));
    std::string zip   = trim(input.substr(comma2 + 1));

    std::transform(state.begin(), state.end(), state.begin(), ::toupper);

  
    return city + ", " + state + " " + zip;
}

