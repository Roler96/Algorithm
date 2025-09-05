#pragma once

#include <algorithm>

#include "common.h"

inline void floyd(Map& graph) {
    std::cout << "At beginning, graph is:\n";
    print(graph);

    std::cout << "Let's go with floyd\n\n";

    size_t n = graph.size();
    // 从第i个点出发
    for (size_t i = 0; i < n; i++) {
        // 通过第j个点中转
        for (size_t j = 0; j < n; j++) {
            // 到第k个点的最短距离
            for (size_t k = 0; k < n; k++) {
                if (k == i || k == j || i == j) {
                    continue;
                }
                // i到k的最短距离 = (i到k的直接距离)和(i到j的距离+j到k的距离) 之中的最小值
                graph[i][k] = std::min(graph[i][k], graph[i][j] + graph[j][k]);
            }
        }

        std::cout << "After round " << i + 1 << ": " << std::endl;
        print(graph);
    }
}