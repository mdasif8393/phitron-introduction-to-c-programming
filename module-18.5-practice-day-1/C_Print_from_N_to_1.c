#include <stdio.h>

void print_recursion(int n, int i)
{

    if (i > n)
    {
        return;
    }

    print_recursion(n, i + 1);
    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    print_recursion(n, 1);
    return 0;
}