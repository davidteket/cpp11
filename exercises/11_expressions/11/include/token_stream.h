#ifndef _TOKEN_STREAM_
#define _TOKEN_STREAM_

#include <iostream>

#include "token.h"
#include "error.h"

// EN: Low-level input tokenizer and input stream resource handler.
//
// HU: Alacsony szintű bemeneti tokenizátor és bemeneti adatfolyam erőforrás-kezelő.
//
class TokenStream {

  private:
    std::istream* is;
    bool owned; // RAII
    Token ct { Kind::end };

    // RAII
    void close()
    {
        if (owned)
          delete is;
    }

  public:
    // EN: read and get next token. // HU: következő token beolvasása és tokenné alakítása.
    Token get();

    // EN: query of actual token.  // HU: a legújabb token lekérése.
    Token& current();

    Error error;

    // EN: Constructors + inline functions.
    // HU: Konstruktorok és helyben kifejtett függvények.
    //
    TokenStream(std::istream* p) : is{p}, owned{true} { error = Error(); }
    TokenStream() {}

    // EN: change input stream source.  // HU: bemeneti adafolyam forrásának megváltoztatása.
    void set_input(std::istream& r)
    {
        close();

        is = &r;
        owned = false;
    }

    // EN: change input stream source.  // HU: bemeneti adafolyam forrásának megváltoztatása.
    void set_input(std::istream* p)
    {
        close();

        is = p;
        owned = true;
    }

};

#endif
