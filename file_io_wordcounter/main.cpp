#include "word_counter.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
    WordCounter wc("file_counter");

    std::ifstream fin("../input.txt");
    if (!fin) {
        std::cout << "Failed to open input.txt\n";
        return 1;
    }

    std::string word;
    while (fin >> word) {
        wc.add(word);
    }

    fin.close();

    std::ofstream fout("result.txt");
    if (!fout) {
        std::cout << "Failed to create result.txt\n";
        return 1;
    }

    fout << "Counter name: " << wc.get_name() << '\n';
    fout << "Unique words: " << wc.size() << '\n';
    fout << "Total words: " << wc.total_words() << "\n\n";

    std::vector<std::pair<std::string, int>> items = wc.get_sorted_items();
    for (const auto& kv : items) {
        fout << kv.first << " : " << kv.second << '\n';
    }

    fout.close();

    std::cout << "Finished reading input.txt and writing result.txt\n";
    return 0;
}