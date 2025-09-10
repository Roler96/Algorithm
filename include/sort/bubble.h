#pragma once

#include "common.h"

template<typename T>
void bubbleSort(std::vector<T> &vec)
{
    size_t round = 1;
    // 每次循环会将最大的值交换到末尾
    for (size_t i = 0; i < vec.size() - 1; i++) {
        // 从vec.size() - 1 - i往后都是有序的了
        for (size_t j = 0; j < vec.size() - 1 - i; j++) {
            if (vec[j] > vec[j + 1]) {
                T t = vec[j + 1];
                vec[j + 1] = vec[j];
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