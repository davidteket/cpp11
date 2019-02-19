#include <iostream>
#include <cctype>

// EN: Low-level input tokenizer and input stream resource handler.
//
// HU: Alacsony szintű bemeneti tokenizátor és bemeneti adatfolyam erőforrás-kezelő.
//
#include "token.h"
#include "token_stream.h"
#include "error.h"

// EN: read and get next token. // HU: következő token beolvasása és tokenné alakítása.
Token TokenStream::get()
{
    char ch = 0;
    *is >> ch;

    switch (ch) {
        case 0:
          return ct = { Kind::end };
        case '+': case '-': case '*': case '/':
        case '(': case ')': case '=': case ';':
          return ct = {static_cast<Kind>(ch)};
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
        case '.':
          is->putback(ch);
          *is >> ct.number_value;
          ct.kind = Kind::number;
          return ct;
        default:
          if (isalpha(ch)) {
              is->putback(ch);
              *is >> ct.string_value;
              ct.kind = Kind::name;
              return ct;
          }

          error.error("bad token");
          return ct = { Kind::print };
    }

}

// EN: query of actual token.  // HU: a legújabb token lekérése.
Token& TokenStream::current()
{
    return ct;
}
