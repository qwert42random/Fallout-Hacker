#include "hacker.h"

int main() {
    std::string word;
    std::ifstream inputFile("exampleInput.txt");
    while (getline(inputFile, word)) {
        std::cout << word << std::endl;
    }
    return 0;
}
