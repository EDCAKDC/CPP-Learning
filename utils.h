#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <unordered_map>
#include <vector>
#include <utility>

std::vector<std::pair<std::string, int>>
map_to_vec(const std::unordered_map<std::string, int>& cnt);

void sort_by_freq(std::vector<std::pair<std::string, int>>& items);

#endif