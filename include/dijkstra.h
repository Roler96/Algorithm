#pragma once

#include <algorithm>
#include "common.h"

inline void dijkstra(Map& graph, int start) {
    std::cout << "At beginning of dijkstra, graph is:\n";
    print(graph);

    std::cout << "Let's go with dijkstra\n\n";

    size_t n = graph.size();

    assert(start >= 0 && start < n);

    std::vector<size_t> unvisited;
    for (size_t i = 0; i < n; i++) {
        unvisited.push_back(i);
    }

    std::vector<int> distance(n);
    std::fill(distance.begin(), distance.end(), INF);
    distance[start] = 0;

    auto printUnvisited = [&]() {
        for (size_t i = 0; i < unvisited.size(); i++) {
            std::cout << unvisited[i] << " ";
        }
    };

    int round = 1;
    while (true) {
        std::cout << "Round " << round++;
        std::cout << std::endl;

        std::cout << "Unvisited node:\n";
        printUnvisited();
        std::cout << std::endl;

        std::cout << "Distance:\n";
        print(distance);
        std::cout << std::endl;
        std::cout << std::endl;

        if(unvisited.empty()) {
            break;
        }

        int min = INF;
        size_t cur = unvisited.front();
        for (size_t i : unvisited) {
            if (distance[i] < min) {
                min = distance[i];
                cur = i;
            }
        }

        // 从start开始，经过cur中转的最短距离
        for (size_t i = 0; i < n; i++) {
            distance[i] = std::min(distance[i], distance[cur] + graph[cur][i]);
        }

        auto it = std::find(unvisited.begin(), unvisited.end(), cur);
        unvisited.erase(it);
    }

    std::cout << std::endl;
    std::cout << "After dijkstra, node " << start << " shortest distance to other node is:\n";
    print(distance);
}