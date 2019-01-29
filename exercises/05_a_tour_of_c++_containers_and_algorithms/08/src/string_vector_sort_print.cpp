#ifndef _VECTOR_SORT_PRINT_
#define _VECTOR_SORT_PRINT_

#include <string>
#include <vector>
#include <algorithm>

#include "string_vector_sort_print.h"

std::string VectorUnsorted(const std::vector<std::string>& v)
{
    std::string out = "{ ";

    for (std::string s : v)
      out += s + " ";

    return out += "}";
}

std::string VectorSorted(std::vector<std::string>& v)
{
    sort(v.begin(), v.end());
    std::string out = "{ ";

    for (std::string s : v)
      out += s + " ";

    return out += "}";
}

#endif
