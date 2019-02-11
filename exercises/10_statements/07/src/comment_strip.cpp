#ifndef _COMMENT_STRIP_
#define _COMMENT_STRIP_

#include <string>
#include <iostream>

// EN: Helper function to determine whether a given index is not inside of a literal.
//
// HU: Segédfüggvény annak megállípítására, hogy a kapott index literálon belül van-e.
//
bool NotInsideOfLiteral(std::string s, const int& i)
{
    char sl_delimiter = '"';
    char cl_delimiter = '\'';

    bool string_literal = false;
    bool char_literal = false;

    // EN: Seek for literal range begin => (..i
    // HU: Literál intervallum kezdetének keresése.
    //
    int j = 0;
    for (; j < i; ++j) {
        if (s[j] == sl_delimiter) {
            string_literal = true;
            ++j;
            break;
        }
        if (s[j] == cl_delimiter) {
            char_literal = true;
            ++j;
            break;
        }
    }

    if (string_literal) {
      for (; j < s.length(); ++j) {
          if ((s[j] == sl_delimiter) && (j > (i + 1)))    // EN: Found string literal range end => (..i..)
              return false;                               // HU: Karakterlánc-literál intervallum vége megtalálva.
      }
    }
    if (char_literal) {
      for (; j < s.length(); ++j) {
          if ((s[j] == cl_delimiter) && (j > (i + 1)))    // EN: Found character literal range end => (..i..)
              return false;                               // HU: Karakter-literál intervallum vége megtalálva.
      }
    }

    return true;
}

// EN: Comment remover function. Rules:
//
// HU: Megjegyzés eltávolító függvény. Szabályok:
//
// char* c1 = "//asdf";        // "//asdf"      => nc (nem komment)
// char* c2 = "/* asdf */";    // "/* asdf */"  => nc (nem komment)
// char c3 = '/*';             // '/*';         => nc (nem komment)
//    => c (komment)
/*
  c   => c (komment)
*/
std::string CommentStrip()
{
    std::string result = {};

    const int token = 2;
    bool mc_active = false;
    char mc_begin[token] = { '/', '*' };
    char mc_end[token] = { '*', '/' };
    char sc_begin[token] = { '/', '/' };

    std::string input {};
    while (getline(std::cin, input) && input != "")
    {
        int i = 0;      // EN: For every op. // HU: minden műveletre.

        if (mc_active)  // EN: Seek for mc_end.  // HU: mc_end keresése.
        {
            for (; i < input.length(); ++i) {
                if (((i + 1) < input.length())
                 && (input[i] == mc_end[0])
                 && (input[i + 1] == mc_end[1]))
                 {
                   i += token;
                   mc_active = false;   // std::cout << "[debug] mc off" << std::endl;
                   break;
                }
            } // for
        }

        if (!mc_active) // EN: Seek for mc_begin or sc_begin // HU: mc_begin vagy sc_begin keresése.
        {

            bool ommit_this = false;

            for (; i < input.length(); ++i)
            {
                if (((i + 1) < input.length())
                 && (input[i] == mc_begin[0])
                 && (input[i + 1] == mc_begin[1])
                 && (NotInsideOfLiteral(input, i)))
                 {
                   i += token;
                   mc_active = true;    // std::cout << "[debug] mc on" << std::endl;
                   break;
                 }

                 else if ((input[i] == sc_begin[0])
                  && (input[i + 1] == sc_begin[1])
                  && (NotInsideOfLiteral(input, i)))
                  {
                     ommit_this = true;  // std::cout << "[debug] sc found" << std::endl;
                     break;
                  }

                 else
                  result += input[i];
            } // for

            if (ommit_this) // EN: Get next input if sc_begin found. HU: Következő input ha sc_begin-t talált.
                continue;
        }
    } // while

    return result;
}

#endif
