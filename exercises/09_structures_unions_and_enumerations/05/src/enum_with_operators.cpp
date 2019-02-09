#ifndef _ENUM_WITH_OPERATORS_
#define _ENUM_WITH_OPERATORS_

#include "enum_with_operators.h"

#include <map>
#include <iostream>

enum class Season : int {
      spring = 1, summer = 2, autumn = 3, winter = 4
};

enum class Language {
    en, hu
};

std::map<Season, std::string> seasons;

Season operator++(Season s)
{
    switch (s) {
        case Season::spring: return Season::summer;
        case Season::summer: return Season::autumn;
        case Season::autumn: return Season::winter;
        case Season::winter: return Season::spring;
    }
}

Season operator--(Season s)
{
    switch(s) {
      case Season::spring: return Season::winter;
      case Season::summer: return Season::spring;
      case Season::autumn: return Season::summer;
      case Season::winter: return Season::autumn;
    }
}

std::string operator<<(std::string x, Season s)
{
    switch(s) {
      case Season::spring: return seasons[Season::spring];
      case Season::summer: return seasons[Season::summer];
      case Season::autumn: return seasons[Season::autumn];
      case Season::winter: return seasons[Season::winter];
    }
}

Season operator>>(std::string x, Season s)
{
    switch(s) {
      case Season::spring: { seasons[Season::spring] = x; return Season::spring; }
      case Season::summer: { seasons[Season::summer] = x; return Season::summer; }
      case Season::autumn: { seasons[Season::autumn] = x; return Season::autumn; }
      case Season::winter: { seasons[Season::winter] = x; return Season::winter; }
    }
}

void  SwitchLanguage(Language l)
{
    switch(l)
    {
        case Language::hu:
        {
            seasons[Season::spring] = "Tavasz";
            seasons[Season::summer] = "Nyár";
            seasons[Season::autumn] = "Ősz";
            seasons[Season::winter] = "Tél";

            break;
        }
        case Language::en:
        {
            seasons[Season::spring] = "Spring";
            seasons[Season::summer] = "Summer";
            seasons[Season::autumn] = "Autumn";
            seasons[Season::winter] = "Winter";

            break;
        }
    }
}

void  PrintSeasons()
{
    std::cout << seasons[Season::spring] << std::endl;
    std::cout << seasons[Season::summer] << std::endl;
    std::cout << seasons[Season::autumn] << std::endl;
    std::cout << seasons[Season::winter] << std::endl;
}


#endif
