#ifndef WORD_COUNTER_H
#define WORD_COUNTER_H

#include <string>
#include <unordered_map>

class WordCounter {
public:
    WordCounter();
    WordCounter(const std::string& counter_name);

    void add(const std::string& word);
    void print() const;
    void print_top_k(int k) const;

    int size() const;
    int total_words() const;
    bool contains(const std::string& word) const;
    int get_count(const std::string& word) const;
    bool empty() const;
    void clear();

    std::string get_name() const;

private:
    std::unordered_map<std::string, int> cnt;
    int total;
    std::string name;
};

#endif