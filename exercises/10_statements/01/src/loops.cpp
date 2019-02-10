#ifndef _LOOPS_
#define _LOOPS_

#include <string>
#include <vector>

std::vector<int> Loops()
{
    auto result = std::vector<int>();
    std::string input_line = "what? if? when? how?";

    int max_length = input_line.length();
    int quest_count = 0;
    int i = 0;

    // for (decl.-statement; control-statement;) statement
    //
    for (i=0; i!=max_length; i++)
      if (input_line[i] == '?')
          quest_count++;

    result.push_back(quest_count);
    quest_count = 0;

    // while (expression) statement
    //
    i = 0;
    while (i++ != max_length)
      if (input_line[i] == '?')
        quest_count++;

    result.push_back(quest_count);
    quest_count = 0;
    char* input_line2 = "what? if? when? how?";

    // Using a pointer as the controller variable.
    //
    for(char* p = input_line2; *p; p++)
      if (*p == '?')
        quest_count++;

    result.push_back(quest_count);
    quest_count = 0;

    char* p = input_line2;
    while (*p++)
      if (*p == '?')
        quest_count++;

    result.push_back(quest_count);
    quest_count = 0;

    // for (decl.-statement : expression) statement
    //
    for (auto c : input_line)
      if (c == '?')
        quest_count++;

    result.push_back(quest_count);
    return result;
}

#endif
