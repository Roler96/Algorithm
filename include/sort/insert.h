#pragma once

#include "common.h"

template<typename T>
void insertSort(std::vector<T> &vec)
{
    size_t round = 1;
    for (size_t i = 1; i < vec.size(); i++) {
        size_t insert_pos = -1;
        T tmp = vec[i];
        for (size_t j = 0; j <= i; j++) {
            if (vec[j] > tmp) {
                insert_pos = j;
                break;
            }
        }

        if (insert_pos != -1) {
            for (size_t j = i; j > insert_pos; j--) {
                vec[j] = vec[j - 1];
            }
            vec[insert_pos] = tmp;
        }
        
        std::cout << "After round " << round++ << std::endl;
        print(vec);
        std::cout << std::endl;
    }
}

inline void tryInsertSort() {
    std::vector<int> vec {8,1,5,4,6,2,7,3,9};

    std::cout << "At beginning of Insert Sort:\n";
    print(vec);
    std::cout << std::endl;

    insertSort(vec);

    std::cout << "After Insert Sort, vec is:\n";
    print(vec);
    std::cout << std::endl;
}