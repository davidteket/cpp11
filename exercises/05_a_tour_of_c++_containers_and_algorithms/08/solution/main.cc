#include <iostream>
#include <string>

#include "string_vector_sort_print.h"

int main()
{
    std::vector<std::string> v = { "Kant", "Plato", "Aristotle", "Kierkegard", "Hume" };
    std::cout << "Unsorted: " << VectorUnsorted(v) << std::endl;
    std::cout << "Sorted: " << VectorSorted(v) << std::endl;
}
