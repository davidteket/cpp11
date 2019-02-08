int main()
{
    char* arr = { "iteration\0"};

    int i = 0;
    while (arr[i])
    {
        ++i;
    }
}
