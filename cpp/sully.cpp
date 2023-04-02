#include <iostream>
#include <fstream>
#include <string>

#define FILENAME "Sully_X.cpp"

int main() {
    std::string filename = FILENAME;
    std::string line;
    int i = 5;
    FILE *file;
    int count = 0;
    while (i > 0)
    {
        i--;
        count = 0;
        std::ifstream input(__FILE__);
        filename[6] = i + '0';
        std::ofstream output_file(filename);
        while (std::getline(input, line)) {
            count++;
            if (count == 10) {
                line.replace(line.find("= 5"), 3, "= " + std::to_string(i));
            }
            output_file << line << std::endl;
        }
        output_file.close();  
        input.close();
    }
    return 0;
}
