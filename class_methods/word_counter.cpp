#include "word_counter.h"

#include <algorithm>
#include <iostream>

static bool cmp(const std::pair<std::string, int>& a,
                const std::pair<std::string, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

WordCounter::WordCounter() : total(0), name("default_counter") {
}

WordCounter::WordCounter(const std::string& counter_name)
    : total(0), name(counter_name) {
}

void WordCounter::add(const std::string& word) {
    cnt[word]++;
    total++;
}

bool WordCounter::remove(const std::string& word) {
    auto it = cnt.find(word);

    if (it == cnt.end()) {
        return false;
    }

    it->second--;
    total--;

    if (it->second == 0) {
        cnt.erase(it);
    }

    return true;
}

void WordCounter::clear() {
    cnt.clear();
    total = 0;
}

void WordCounter::reset(const std::string& new_name) {
    cnt.clear();
    total = 0;
    name = new_name;
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

std::string WordCounter::get_name() const {
    return name;
}

std::vector<std::pair<std::string, int>> WordCounter::get_sorted_items() const {
    std::vector<std::pair<std::string, int>> items;

    for (const auto& kv : cnt) {
        items.push_back(kv);
    }

    std::sort(items.begin(), items.end(), cmp);
    return items;
}

std::vector<std::string> WordCounter::get_words_with_count_at_least(int min_count) const {
    std::vector<std::string> result;

    for (const auto& kv : cnt) {
        if (kv.second >= min_count) {
            result.push_back(kv.first);
        }
    }

    std::sort(result.begin(), result.end());
    return result;
}

void WordCounter::print() const {
    std::vector<std::pair<std::string, int>> items = get_sorted_items();

    for (const auto& kv : items) {
        std::cout << kv.first << " : " << kv.second << '\n';
    }
}

void WordCounter::print_top_k(int k) const {
    std::vector<std::pair<std::string, int>> items = get_sorted_items();

    for (int i = 0; i < k && i < static_cast<int>(items.size()); i++) {
        std::cout << items[i].first << " : " << items[i].second << '\n';
    }
}

bool WordCounter::same_as(const WordCounter& other) const {
    return cnt == other.cnt && total == other.total;
}