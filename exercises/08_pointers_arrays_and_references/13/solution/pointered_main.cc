int main()
{
    char* arr = { "iteration\0"};

    char* p = arr;
    while (*p)
    {
        ++p;
    }
}
