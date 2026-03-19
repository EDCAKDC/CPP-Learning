#include "word_counter.h"

#include <algorithm>
#include <iostream>
#include <vector>

// sort by frequency descending
static bool cmp(const std::pair<std::string, int>& a,
                const std::pair<std::string, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

// constructor
WordCounter::WordCounter() {
    total = 0;
}

void WordCounter::add(const std::string& word) {
    cnt[word]++;
    total++;
}

void WordCounter::print() const {
    std::vector<std::pair<std::string, int>> items;

    for (const auto& kv : cnt) {
        items.push_back(kv);
    }

    std::sort(items.begin(), items.end(), cmp);

    for (const auto& kv : items) {
        std::cout << kv.first << " : " << kv.second << '\n';
    }
}

void WordCounter::print_top_k(int k) const {
    std::vector<std::pair<std::string, int>> items;

    for (const auto& kv : cnt) {
        items.push_back(kv);
    }

    std::sort(items.begin(), items.end(), cmp);

    for (int i = 0; i < k && i < static_cast<int>(items.size()); i++) {
        std::cout << items[i].first << " : " << items[i].second << '\n';
    }
}

int WordCounter::size() const {
    return static_cast<int>(cnt.size());
}

int WordCounter::total_words() const {
    return total;
}

bool WordCounter::contains(const std::string& word) const {
    return cnt.find(word) != cnt.end();
}

int WordCounter::get_count(const std::string& word) const {
    auto it = cnt.find(word);
    if (it != cnt.end()) {
        return it->second;
    }
    return 0;
}

void WordCounter::clear() {
    cnt.clear();
    total = 0;
}