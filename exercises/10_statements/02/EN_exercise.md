[2] (∗1) See how your compiler reacts to these errors:

    void f(int a, int b)
    {
        if (a = 3) // ...
        if (a&077 == 0) // ...
        a := b+1;
    }
    
Devise more simple errors and see how the compiler reacts.
