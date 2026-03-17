#include "word_counter.h"

#include <iostream>
#include <string>

int main() {
    WordCounter wc;
    std::string word;

    std::cout << "Enter words \n";

    while (std::cin >> word) {
        wc.add(word);
    }

    std::cout << "\n=== All words ===\n";
    wc.print();

    std::cout << "\n=== Top 3 ===\n";
    wc.print_top_k(3);

    std::cout << "\n=== Checks ===\n";
    std::cout << "distinct words = " << wc.size() << '\n';
    std::cout << "contains apple? " << (wc.contains("apple") ? "yes" : "no") << '\n';
    std::cout << "count of apple = " << wc.get_count("apple") << '\n';

    wc.clear();
    std::cout << "\nAfter clear, distinct words = " << wc.size() << '\n';

    return 0;
}