#include "enum_with_operators.h"

#include <iostream>

int main()
{
      std::cout << "Switching language to english." << std::endl;
      Language l = Language::en;
      SwitchLanguage(l);

      std::cout << "Listing all seasons: " << std::endl;
      PrintSeasons();
      std::cout << std::endl;

      std::string s1 {};
      std::string s2 {};
      std::string s3 {};

      s1 = (s1 << ++(Season::winter));
      s2 = (s2 << --(Season::spring));
      s3 = (s3 << ++(Season::spring));

      std::cout << "The next season after winter: " << s1 << std::endl;
      std::cout << "The previous season before spring: " << s2 << std::endl;
      std::cout << "The hottest season after spring: " << s3 << std::endl;
      std::cout << std::endl;

      std::cout << "Switching language to hungarian." << std::endl;
      l = Language::hu;
      SwitchLanguage(l);

      std::cout << "Listing all seasons: " << std::endl;
      PrintSeasons();
      std::cout << std::endl;
}
