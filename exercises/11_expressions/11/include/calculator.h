#ifndef _CALCULATOR_
#define _CALCULATOR_

#include <iostream>
#include <string>
#include <map>

// EN: The Desk Calculator example from §10.2
//     It is a miniature compiler with tokenizer, syntax analizer and expression evaluator.
//     The input text being interpreted with recursive descent technique.
//
// HU: Az Asztali Számológép példa a §10.2-ből.
//    Egy miniatűr fordító tokenizátorral, szintaxis elemzővel és kifejezés kiértékelővel.
//    A bemeneti szöveget rekurzív leszállás technikával értelmezi.
//
#include "token_stream.h"
#include "error.h"

class Calculator {

  private:
    TokenStream ts;

    double expr(bool get);
    double term(bool get);
    double prim(bool get);

  public:
    std::map<std::string, double> table;
    Error error;

    Calculator(std::istream* p) { ts = TokenStream(p); error = Error();}

    void Calculate();
};

#endif
