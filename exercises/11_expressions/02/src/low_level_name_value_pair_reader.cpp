#include "low_level_name_value_pair_reader.h"

#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <sstream>

void Pair::Read()
{
    std::string line {};
    while (getline(std::cin, line))
    {
        if (line == "") break;
        else line += '\n';

        std::string n {};
        std::string v {};

        bool name = true;
        bool value = false;
        bool dot = false;

        for (int i = 0; i < line.length(); ++i)
        {
            // Looking for name.  // Név keresése.
            //
            if (name && (!value) && (!isspace(line[i]))) {

                n += line[i];
                continue;
            }

            // Looking for value, only one dot is allowed. // Érték keresése, csak egy pont a megengedett.
            //
            if (value && (!name)
              && ((line[i] >= '0' && line[i] <= '9') || (line[i] == '.' && (!dot)))) {
                if (line[i] == '.')
                    dot = true;

                name = false;
                v += line[i];
                continue;
            }

            // Name check. // Megvan a név.
            //
            if (isspace(line[i]) && name && n.length())
            {
                name = false;
                value = true;
            }

            // Value check. // Megvan az érték.
            //
            if (((line[i] == '\n') || (isspace(line[i]))
              && value && v.length()))
            {
                value = false;
                dot = false;
                name = true;

                float f = std::stof(v);
                input[n].push_back(f);
                n = v = std::string();
            }
        } // for
    } // while
}

std::map<std::string, float> Pair::SumForEachName() const
{
    auto result = std::map<std::string, float>();
    for (auto v : input)
    {
        result[v.first] = 0.0;
        for (float i : v.second)
          result[v.first] += i;
    }

    return result;
}

float Pair::SumForAllName() const
{
    float result = 0.0;

    for (auto v : input) {
      for (float i : v.second)
      result += i;
    }

    return result;
}

std::map<std::string, float> Pair::MeanForEachName() const
{
    auto result = std::map<std::string, float>();

    for (auto x : input) {
        if ((x.second.size() - 1) % 2)  // Middle two. // Középső kettő.
          result[x.first] = (x.second[x.second.size() / 2] + x.second[(x.second.size() / 2) - 1]) / 2;
        else // Middle one. // Középső.
          result[x.first] = x.second[x.second.size() / 2];
    }

    return result;
}


float Pair::MeanForAllName() const
{
    float result = 0.0;

    std::vector<float> tmp {};
    for (auto x : this->MeanForEachName())
        tmp.push_back(x.second);

    return result = ((tmp.size() % 2) == 0) ? (tmp[(tmp.size() / 2) - 1] + tmp[tmp.size() / 2]) / 2 : tmp[tmp.size() / 2];
}

std::map<std::string, std::vector<float>> Pair::GetInput() const
{
    return input;
}
