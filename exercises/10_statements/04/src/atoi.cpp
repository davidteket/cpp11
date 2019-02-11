#ifndef _ATOI_
#define _ATOI_

#include <cmath>
#include <iostream>

namespace Conversions {

  // octal: 0...
  // hexa:  0x...
  // hexa:  0X...
  //
  int atoi(const char* cstr)
  {
      int result = 0;

      int length = 0;
      int base = 10;
      int offset = 0;

      const char* p = cstr;
      while (*p++) ++length;

      if (length) {
          if ((length > 2) && (cstr[0] == '0' && ((cstr[1] == 'x') || (cstr[1] == 'X')))) {
              base = 16;
              offset = 2;
          }
          else if ((length > 1) && (cstr[0] == '0')) {
              base = 8;
              offset = 1;
          }
          else {
              base = 10;
              offset = 0;
          }
      }

      // (s[c] * b^n) + ... + (s[1] * b^1) + s[0]
      //
      int n = 0;
      for (int c = (length  - 1); c >= offset; --c)
      {
          switch (cstr[c]) {
              case '0': case '1':  case '2':  case '3':
              case '4': case '5':  case '6':  case '7':
              case '8': case '9':
                  result += ((cstr[c] - 48) * pow(base, n));
                  break;
              case 'A':
                  result += ((10) * pow(base, n));
                  break;
              case 'B':
                  result += ((11) * pow(base, n));
                  break;
              case 'C':
                  result += ((12) * pow(base, n));
                  break;
              case 'D':
                  result += ((13) * pow(base, n));
                  break;
              case 'E':
                  result += ((14) * pow(base, n));
                  break;
              case 'F':
                  result += ((15) * pow(base, n));
                  break;
          }

          ++n;
      }

      return result;
  }
}
#endif
