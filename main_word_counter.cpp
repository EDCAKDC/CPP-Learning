#include <iostream>
#include <string>
#include "word_counter.h"

int main() {
    WordCounter wc;
    std::string word;

    while (std::cin >> word) {
        wc.add(word);
    }

    wc.print();
    return 0;
}