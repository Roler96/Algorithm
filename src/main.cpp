#include "floyd.h"
#include "dijkstra.h"

void tryFloyd() {
    static std::vector<std::vector<int>> graph = {
        {0, INF, 10, INF, 30, 100},
        {INF, 0, 5, INF, INF, INF},
        {INF, INF, 0, 50, INF, INF},
        {INF, INF, INF, 0, INF, 10},
        {INF, INF, INF, INF, 0, 60},
        {INF, INF, INF, INF, INF, 0}
    };
    floyd(graph);
}

void tryDijkstra() {
    static std::vector<std::vector<int>> graph = {
        {0,   10,  INF, 4,   INF, INF},
        {10,  0,   8,   2,   6,   INF},
        {INF, 8,   0,   15,  1,   5},
        {4,   2,   15,  0,   6,   INF},
        {INF, 6,   1,   6,   0,   12},
        {INF, INF, 5,   INF, 12,  0}
    };
    int start = 0;
    dijkstra(graph, start);
}

int main(int argc, char *argv[])
{
    tryDijkstra();
    return 0;
}
