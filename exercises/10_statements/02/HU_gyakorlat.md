[2] (∗1) Nézzük meg hogyan reagál a fordító a következő hibákra:

    void f(int a, int b)
    {
        if (a = 3) // ...
        if (a&077 == 0) // ...
        a := b+1;
    }

Hozzunk össze egyszerűbb hibákat és nézzük meg hogyan reagál a fordító.
