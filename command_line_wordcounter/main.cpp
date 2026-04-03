#include "word_counter.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage: ./word_counter_app <input_file> <output_file>\n";
        return 1;
    }

    std::string input_file = argv[1];
    std::string output_file = argv[2];

    WordCounter wc("file_counter");

    std::ifstream fin(input_file);
    if (!fin) {
        std::cout << "Failed to open input file: " << input_file << '\n';
        return 1;
    }

    std::string word;
    while (fin >> word) {
        wc.add(word);
    }

    fin.close();

    std::ofstream fout(output_file);
    if (!fout) {
        std::cout << "Failed to create output file: " << output_file << '\n';
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

    std::cout << "Finished reading " << input_file
              << " and writing " << output_file << '\n';

    return 0;
}