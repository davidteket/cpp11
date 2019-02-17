#include "low_level_name_value_pair_reader.h"

#include <string>
#include <vector>
#include <map>
#include <iostream>

int main()
{
    std::cout << "this program reads name value pairs (eg. test it by CTRL+SHIFT+C -> CTRL+SHIFT+V this text: quick 33 brown 45 quick 50 quick 22)" << std::endl << std::endl;

    auto p = Pair();
    p.Read();
    std::map<std::string, std::vector<float>> r = p.GetInput();

    std::cout << "sum for each name: " << std::endl;
    std::map<std::string, float> s_each = p.SumForEachName();
    for(auto e : s_each)
      std::cout << e.first << "\t" << e.second << std::endl;

    std::cout << std::endl << "mean for each name: " << std::endl;
    std::map<std::string, float> m_each = p.MeanForEachName();
    for(auto e : m_each)
      std::cout << e.first << "\t" << e.second << std::endl;


    std::cout << std::endl << "sum for all name: " <<  p.SumForAllName() << std::endl;
    std::cout << "mean for all name: " <<  p.MeanForAllName() << std::endl;
}
