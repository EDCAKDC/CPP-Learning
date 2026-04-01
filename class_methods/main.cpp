#include "word_counter.h"

#include <iostream>
#include <string>
#include <vector>

int main() {
    WordCounter wc1("counter_one");
    WordCounter wc2("counter_two");

    // add words to wc1
    wc1.add("apple");
    wc1.add("banana");
    wc1.add("apple");
    wc1.add("orange");
    wc1.add("banana");
    wc1.add("apple");

    // add words to wc2
    wc2.add("apple");
    wc2.add("banana");
    wc2.add("apple");
    wc2.add("orange");
    wc2.add("banana");
    wc2.add("apple");

    std::cout << "=== " << wc1.get_name() << " ===\n";
    wc1.print();

    std::cout << "\nsize = " << wc1.size() << '\n';
    std::cout << "total words = " << wc1.total_words() << '\n';
    std::cout << "count of apple = " << wc1.get_count("apple") << '\n';

    std::cout << "\n=== remove test ===\n";
    wc1.remove("apple");
    wc1.remove("orange");
    wc1.print();

    std::cout << "\n=== words with count >= 2 ===\n";
    std::vector<std::string> words = wc1.get_words_with_count_at_least(2);
    for (const auto& w : words) {
        std::cout << w << '\n';
    }

    std::cout << "\n=== compare two objects ===\n";
    if (wc1.same_as(wc2)) {
        std::cout << "wc1 and wc2 are the same\n";
    } else {
        std::cout << "wc1 and wc2 are different\n";
    }

    std::cout << "\n=== top 2 in wc2 ===\n";
    wc2.print_top_k(2);

    std::cout << "\n=== reset wc2 ===\n";
    wc2.reset("new_counter");
    std::cout << "name = " << wc2.get_name() << '\n';
    std::cout << "size = " << wc2.size() << '\n';
    std::cout << "total words = " << wc2.total_words() << '\n';

    return 0;
}