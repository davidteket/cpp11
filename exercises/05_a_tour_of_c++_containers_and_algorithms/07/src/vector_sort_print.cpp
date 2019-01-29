#ifndef _VECTOR_SORT_PRINT_
#define _VECTOR_SORT_PRINT_

#include <string>
#include <vector>
#include <algorithm>

std::string VectorUnsorted(const std::vector<int>& v)
{
    std::string out = "{ ";

    for (int i : v)
      out += std::to_string(i) + " ";

    return out += "}";
}

std::string VectorSorted(std::vector<int>& v)
{
    sort(v.begin(), v.end());

    std::string out = "{ ";

    for (int i : v)
      out += std::to_string(i) + " ";

    return out += "}";
}

#endif
