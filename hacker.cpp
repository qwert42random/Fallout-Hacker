#include "hacker.h"

int main() {

    std::string word;

    std::string *wordList = (std::string*) malloc(sizeof(std::string));
    // std::string *wordList = new std::string;

    std::ifstream inputFile("exampleInput.txt");
    int wordCount = 0;

    // Iterate through all words and put them into list.
    while (getline(inputFile, word)) {

        std::cout << word << std::endl;
        wordList = (std::string*) realloc(wordList, sizeof(std::string) * (wordCount));

        if (wordList == NULL) {
            std::cout << "Error" << std::endl;
            free(wordList);
            return 1;
        } else {
            wordList[wordCount] = word;
            wordCount++;
        }

    }

    for (int i = 0; i < wordCount; i++) {
        std::cout << wordList[i] << std::endl;
    }

    // delete[] wordList;
    free(wordList);

    return 0;



    // while (getline(inputFile, word)) {
    //     std::cout << word << std::endl;

    //     // TODO: Test if this triggers properly.
    //     if (word.length() != wordLength) {
    //         std::cout << "Error: Mismatched word length in: ";
    //         std::cout << word << std::endl;
    //         std::cout << "Expected a length of: ";
    //         std::cout << wordLength << std::endl;
    //     }
    // }
    return 0;
}
