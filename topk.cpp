#include <iostream>
#include <string>
#include <unordered_map>
#include "utils.h"

int main() {
    int k;
    std::cin >> k;

    std::unordered_map<std::string, int> cnt;
    std::string word;

    while (std::cin >> word) {
        cnt[word]++;
    }

    auto items = map_to_vec(cnt);
    sort_by_freq(items);

    for (int i = 0; i < k && i < (int)items.size(); i++) {
        std::cout << items[i].first << '\t' << items[i].second << '\n';
    }

    return 0;
}