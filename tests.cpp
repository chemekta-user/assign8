#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "postNetFunctions.h"    //Include your .h file


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
        return " ";

    std::string city  = trim(input.substr(0, comma1));
    std::string state = trim(input.substr(comma1 + 1, comma2 - comma1 - 1));
    std::string zip   = trim(input.substr(comma2 + 1));

    std::transform(state.begin(), state.end(), state.begin(), ::toupper);

  
    return city + ", " + state + " " + zip;
}

TEST_CASE("trim"){
  CHECK(trim("  ")== "");
}
TEST_CASE("formatAddress"){
  CHECK(formatAddress("New York,NY,56458") == "New York, NY 56458");
}
