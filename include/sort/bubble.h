#pragma once

#include "common.h"

template<typename T>
void bubbleSort(std::vector<T> &vec)
{
    size_t round = 1;
    for (size_t i = 0; i < vec.size() - 1; i++) {
        for (size_t j = i + 1; j < vec.size(); j++) {
            if (vec[i] > vec[j]) {
                T t = vec[i];
                vec[i] = vec[j];
                vec[j] = t;
            }
        }
        std::cout << "After round " << round++ << ": ";
        print(vec);
        std::cout << std::endl;
    }
}

inline void tryBubbleSort() {
    std::vector<int> vec {8,1,3,5,6,2,7,9};

    std::cout << "At beginning of Bubble Sort:\n";
    print(vec);
    std::cout << std::endl;

    bubbleSort(vec);

    std::cout << "After Bubble Sort, vec is:\n";
    print(vec);
    std::cout << std::endl;
}