#include <iostream>
#include <string>
#include <unordered_map>
#include "utils.h"

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<std::string, int> cnt;
    for (int i = 0; i < n; i++) {
        std::string word;
        std::cin >> word;
        cnt[word]++;
    }

    auto items = map_to_vec(cnt);
    sort_by_freq(items);

    for (const auto& kv : items) {
        std::cout << kv.first << " : " << kv.second << '\n';
    }

    return 0;
}