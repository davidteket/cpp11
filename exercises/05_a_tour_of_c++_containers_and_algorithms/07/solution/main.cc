#include <iostream>

#include "vector_sort_print.h"

int main()
{
    std::vector<int> v = { 5, 9, -1, 200, 0 };
    std::cout << "Unsorted: " << VectorUnsorted(v) << std::endl;
    std::cout << "Sorted: " << VectorSorted(v) << std::endl;
}
