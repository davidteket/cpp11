#ifndef _SWAP_
#define _SWAP_

void Swap(int* x, int* y)
{
    int tmp = (*x);

    *x = (*y);
    *y = (tmp);
}

void Swap(int& x, int& y)
{
    int tmp = x;

    x = y;
    y = tmp;
}

#endif
