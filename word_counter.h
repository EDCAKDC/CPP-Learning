#ifndef WORD_COUNTER_H
#define WORD_COUNTER_H

#include <string>
#include <unordered_map>

class WordCounter {
    public:
    void add(const std::string& word);
    void print() const;
    
private:
    std::unordered_map<std::string, int> cnt;
};

#endif