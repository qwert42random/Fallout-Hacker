#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cstdlib>

void printHello() {
    std::cout << "Hello" << std::endl;
    return;
}

int getUserInput() {

    int userInput;

    while (true) {

        std::cout << "How many correct?: ";
        std::cin >> userInput;

        if (std::cin.fail()) {

            std::cout << "Invalid Input" << std::endl;

            // Flush input buffer.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        } else {

            return userInput;

        }
    }
}

