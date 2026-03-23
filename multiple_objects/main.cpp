#include "word_counter.h"

#include <iostream>
#include <string>

void print_summary(const WordCounter& wc) {
    std::cout << "=== Summary for " << wc.get_name() << " ===\n";
    std::cout << "distinct words = " << wc.size() << '\n';
    std::cout << "total words = " << wc.total_words() << '\n';
    std::cout << "contains apple? " << (wc.contains("apple") ? "yes" : "no") << '\n';
    std::cout << '\n';
}

int main() {
    WordCounter fruits("fruit_counter");
    WordCounter animals("animal_counter");

    fruits.add("apple");
    fruits.add("banana");
    fruits.add("apple");
    fruits.add("orange");

    animals.add("cat");
    animals.add("dog");
    animals.add("cat");
    animals.add("bird");
    animals.add("dog");
    animals.add("dog");

    print_summary(fruits);
    fruits.print();

    std::cout << "\n=== Top 2 fruits ===\n";
    fruits.print_top_k(2);

    std::cout << "\n";

    print_summary(animals);
    animals.print();

    std::cout << "\n=== Top 2 animals ===\n";
    animals.print_top_k(2);

    std::cout << "\n=== Clear animal counter ===\n";
    animals.clear();
    print_summary(animals);

    return 0;
}