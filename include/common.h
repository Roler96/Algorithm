#pragma once

#include <vector>
#include <utility>
#include <cassert>
#include <iostream>
#include <iomanip>

using Pos = std::pair<int, int>;
using Map = std::vector<std::vector<int>>;

static constexpr int INF = 999999;

inline void print(const std::vector<int>& vec) {
    if (vec.empty()) {
        return;
    }
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == INF) {
            std::cout << std::setw(5) << "INF";
        } else {
            std::cout << std::setw(5) << vec[i];
        }
        std::cout << " ";
    }
}

inline void print(const Map& map) {
    if (map.empty()) {
        return;
    }

    assert(map.size() == map.front().size());

    for (const auto& vec : map) {
        print(vec);
        std::cout << std::endl;
    }

    std::cout << std::endl;
}