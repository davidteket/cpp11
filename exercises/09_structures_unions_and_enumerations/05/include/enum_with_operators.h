#ifndef _ENUM_WITH_OPERATORS_
#define _ENUM_WITH_OPERATORS_

#include <string>

enum class Season : int {
      spring = 1, summer = 2, autumn = 3, winter = 4
};

enum class Language {
    en, hu
};

Season operator++(Season s);
Season operator--(Season s);
std::string operator<<(std::string x, Season s);
Season operator>>(std::string x, Season s);

void SwitchLanguage(Language l);
void  PrintSeasons();

#endif
