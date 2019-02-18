#ifndef _C_STRING_OPERATIONS_
#define _C_STRING_OPERATIONS_

namespace MyCstrFunctions {

  // EN: Assumes 0 terminated sequence of characters.
  //
  // HU: 0 terminált karaktersorozatot feltételez.
  //
  int strlen(const char* str)
  {
      int result = 0;

      while (*(++str))
          ++result;

      return ++result;
  }

  // EN: Destination must be equal in length compared to the souce in order to copy the full content.
  //
  // HU: A tartalom átmásolásához a célnak ugyanolyan hosszúnak kell lennie mint a forrás hossza.
  //
  char* strcpy(const char* from, char* to, const int n)
  {
      to = new char[n];

      int i = 0;
      while (i < n) {
          *(to + i) = *(from + i);
          ++i;
      }

      *(to + i) = '\0';
      return to;
  }

  // EN: -1 if the compared is less,
  //      0 if equal
  //      1 if greater
  //
  // HU: -1 ha az összehasonlított kisebb,
  //      0 ha egyenlő
  //      1 ha nagyobb
  //
  int strcmp(const char* comparer, const char* compared)
  {
      int result = 0;

      // EN: Iterating on the shorter one.
      // HU: A rövidebb bejárása.
      int i = (strlen(compared) > strlen(comparer)) ? strlen(compared) : strlen(comparer);
      for(int j = 0; j < i; ++j) {
          if (compared[j] < comparer[j])  {
              result = -1;
              break;
          }
          if (compared[j] > comparer[j])
          {
              result = 1;
              break;
          }
      }

      return result;
  }
}
#endif
