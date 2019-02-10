#ifndef _HOW_THE_COMPILER_WILL_REACT_TO_INTENTIONAL_ERRORS_
#define _HOW_THE_COMPILER_WILL_REACT_TO_INTENTIONAL_ERRORS_

void f(int a, int b)
{
    if (a = 3)      // warning: suggest parentheses around assignment used as truth value
    if (a&077 == 0) // warning: suggest parentheses around comparison in operand of ‘&’
    a := b+1;       // error: expected primary-expression before ‘=’ token
}

void IntentionalErrors()
{
    f(3, 2);
}

#endif
