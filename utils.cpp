#include "utils.h"
#include <algorithm>

std::vector<std::pair<std::string, int>>
map_to_vec(const std::unordered_map<std::string, int>& cnt) {
    std::vector<std::pair<std::string, int>> items;

    for (const auto& kv : cnt) {
        items.push_back(kv);
    }

    return items;
}

void sort_by_freq(std::vector<std::pair<std::string, int>>& items) {
    std::sort(items.begin(), items.end(),
              [](const std::pair<std::string, int>& a,
                 const std::pair<std::string, int>& b) {
                  if (a.second != b.second) {
                      return a.second > b.second;
                  }
                  return a.first < b.first;
              });
}