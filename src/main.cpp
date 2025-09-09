#include "sort/bubble.h"
#include "sort/select.h"

#include "path/floyd.h"
#include "path/dijkstra.h"

enum TryAlgorithm {
    SORT_BUBBLE,
    SORT_SELECT,
    SORT_QUICK,
    SORT_MERGE,
    SORT_SHELL,
    SORT_INSERT,
    SORT_HEAP,
    
    PATH_FLOYD,
    PATH_DIJKSTRA,
};

int main(int argc, char *argv[])
{
    switch(TryAlgorithm::SORT_SELECT) {
    case SORT_BUBBLE:
        tryBubbleSort();
        break;
    case SORT_SELECT:
        trySelectSort();
        break;
    case PATH_FLOYD:
        tryFloyd();
        break;
    case PATH_DIJKSTRA:
        tryDijkstra();
        break;
    }
    return 0;
}
