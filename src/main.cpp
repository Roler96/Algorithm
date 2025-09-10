#include "sort/bubble.h"
#include "sort/select.h"
#include "sort/insert.h"

#include "path/floyd.h"
#include "path/dijkstra.h"

#define TRY(desc, func)         \
std::cout << desc << std::endl; \
func();                         \
std::cout << std::endl;         \

int main(int argc, char *argv[])
{
    TRY("Bubble Sort", tryBubbleSort);
    TRY("Select Sort", trySelectSort);
    TRY("Insert Sort", tryInsertSort);
    TRY("Floyd", tryFloyd);
    TRY("Dijkstra", tryDijkstra);
    return 0;
}
