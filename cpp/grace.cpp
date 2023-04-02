// #include <iostream>
// #include <fstream>
// #include <string>

// #define FILENAME   "Grace_kid.cpp"
// #define LAUNCHER() int main() { std::ifstream input(__FILE__); std::ofstream output_file(FILENAME); if (output_file){}; std::string line; while (std::getline(input, line)) { output_file << line << std::endl; } input.close();  output_file.close(); return 0; }

// /*
// This program will print its own source when run.
// */

// LAUNCHER()

#include <iostream>
#include <fstream>
#include <string>

#define FILENAME   "Grace_kid.cpp"
//#define LAUNCHER() 

/*
This program will print its own source when run.
*/

int main() {
    std::ifstream input(__FILE__);
    std::ofstream output_file(FILENAME);
    if (output_file){}; 
    std::string line;
    while (std::getline(input, line)) {
        output_file << line << std::endl;
    }
    input.close();  
    output_file.close();  
    return 0;
}
