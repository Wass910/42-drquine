#include <iostream>
#include <fstream>
#include <string>

/*
    before main
*/

int main() {
    /*
        in main
    */
    std::ifstream input(__FILE__);
    std::string line;
    while (std::getline(input, line)) {
        std::cout << line << std::endl;
    }
    input.close();
    return 0;
}
