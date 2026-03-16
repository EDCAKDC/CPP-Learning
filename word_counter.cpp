#include "word_counter.h"
#include <iostream>

void WordCounter::add(const std::string& word) {
    cnt[word]++;
}

void WordCounter::print() const {
    for (const auto& kv : cnt) {
        std::cout << kv.first << " : " << kv.second << '\n';
    }
}