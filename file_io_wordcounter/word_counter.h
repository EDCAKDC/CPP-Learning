#ifndef WORD_COUNTER_H
#define WORD_COUNTER_H

#include <string>
#include <unordered_map>
#include <vector>
#include <utility>

class WordCounter {
private:
    std::unordered_map<std::string, int> cnt;
    int total;
    std::string name;

public:
    WordCounter();
    WordCounter(const std::string& counter_name);

    void add(const std::string& word);
    bool remove(const std::string& word);
    void clear();
    void reset(const std::string& new_name);

    int size() const;
    int total_words() const;
    bool contains(const std::string& word) const;
    int get_count(const std::string& word) const;
    std::string get_name() const;

    std::vector<std::pair<std::string, int>> get_sorted_items() const;

    void print() const;
    void print_top_k(int k) const;
    bool same_as(const WordCounter& other) const;
};

#endif