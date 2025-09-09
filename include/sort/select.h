#pragma once

#include "common.h"

template<typename T>
void selectSort(std::vector<T> &vec)
{
    size_t round = 1;
    for (size_t i = 0; i < vec.size() - 1; i++) {
        size_t index = i;
        for (size_t j = i + 1; j < vec.size(); j++) {
            if (vec[index] > vec[j]) {
                index = j;
            }
        }
        if (index != i) {
            T tmp = vec[i];
            vec[i] = vec[index];
            vec[index] = tmp;
        }
        std::cout << "After round " << round++ << std::endl;
        print(vec);
        std::cout << std::endl;
    }
}

inline void trySelectSort() {
    std::vector<int> vec {8,1,5,4,6,2,7,3,9};

    std::cout << "At beginning of Select Sort:\n";
    print(vec);
    std::cout << std::endl;

    selectSort(vec);

    std::cout << "After Select Sort, vec is:\n";
    print(vec);
    std::cout << std::endl;
}