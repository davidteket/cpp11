#include <iostream>

// EN: The Desk Calculator example from §10.2
//     It is a miniature compiler with tokenizer, syntax analizer and expression evaluator.
//     The input text being interpreted with recursive descent technique.
//
// HU: Az Asztali Számológép példa a §10.2-ből.
//    Egy miniatűr fordító tokenizátorral, szintaxis elemzővel és kifejezés kiértékelővel.
//    A bemeneti szöveget rekurzív leszállás technikával értelmezi.
//
#include "calculator.h"
#include "token.h"
#include "error.h"

// EN: Addition and subtraction. // HU: Összeadás és kivonás.
//
double Calculator::expr(bool get)
{
    double left = term(get);

    for(;;) {
        switch (ts.current().kind) {
            case Kind::plus:
              left += term(true);
              break;
            case Kind::minus:
              left -= term(true);
              break;
            default:
              return left;
        }
    }
}

// EN: Multiplication and division. // HU: Szorzás és osztás.
//
double Calculator::term(bool get)
{
    double left = prim(get);

    for(;;) {
        switch (ts.current().kind) {
            case Kind::mul:
              left *= prim(true);
              break;
            case Kind::div:
              if (auto d = prim(true)) {
                  left /= d;
                  break;
              }
              return error.error("divide by 0");
            default:
              return left;
        }
    }
}

// EN: Name and value. // HU: Név és érték.
//
double Calculator::prim(bool get)
{
    if (get) ts.get();

    switch (ts.current().kind) {
        case Kind::number:
        {
            double v = ts.current().number_value;
            ts.get();
            return v;
        }
        case Kind::name:
        {
            double& v = table[ts.current().string_value];       // EN: grab the name. // HU: név megragadása.
            if (ts.get().kind == Kind::assign) v = expr(true);  // EN: assign name.   // HU: név hozzárendelése.
            return v;
        }
        case Kind::minus:
            return -prim(true);
        case Kind::lp:
        {
            auto e = expr(true);
            if (ts.current().kind != Kind::rp) return error.error("')' expected");
            ts.get();   // EN: skip ')'. // HU: ')' átugrása.
            return e;
        }
        default:
            return error.error("primary expected");
    }
}

// EN: Starts the calculator. // HU: Elindítja a számológépet.
//
void Calculator::Calculate()
{
    std::cout << "calculator program - enter ; to finish the expression" << std::endl;
    std::cout << "for example enter the following: x = 2; x = 2 + 2; x = 2 * 4; x = 2 / pi ;" << std::endl << std::endl;
    while (true)
    {

        ts.get();

        if (ts.current().kind == Kind::end)
            break;

        if (ts.current().kind == Kind::print)
            continue;

        std::cout << "-------------------" << std::endl << expr(false) << std::endl << std::endl;
    }
}
