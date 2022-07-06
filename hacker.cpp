#include "hacker.h"

int main() {

    std::string word;
    std::string *wordList = (std::string*) malloc(sizeof(std::string));
    std::ifstream inputFile("exampleInput.txt");
    int wordCount = 0;

    // Get first word in file.
    // getline(inputFile, word);
    // wordList[0] = word;
    // std::cout << word << std::endl;
    // const int wordLength = word.length();

    // Iterate through all words and put them into list.
    while (getline(inputFile, word)) {

        std::cout << word << std::endl;
        wordList[wordCount++] = word;

        wordList = (std::string*) realloc(wordList, sizeof(std::string) * (wordCount));
        if (wordList == NULL) {
            std::cout << "Error" << std::endl;
            free(wordList);
            return 1;
        }

    }

    for (int i = 0; i < wordCount; i++) {
        std::cout << wordList[i] << std::endl;
    }

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
