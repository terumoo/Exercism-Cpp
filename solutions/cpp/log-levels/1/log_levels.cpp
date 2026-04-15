#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int index = line.find(":");
    std::string res = line.substr(index+2);
    return res;
}

std::string log_level(std::string line) {
    // return the log level
    int index1 = line.find("[");
    int index2 = line.find("]");
    std::string res = line.substr(index1+1, index2-1);
    return res;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string res = message(line) + " (" + log_level(line) + ")"; 
    return res;
}
}  // namespace log_line
