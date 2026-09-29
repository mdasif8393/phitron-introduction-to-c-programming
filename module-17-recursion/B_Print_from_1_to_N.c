#include <stdio.h>

print_from_1to_n(int n, int i)
{

    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    print_from_1to_n(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_from_1to_n(n, 1);

    return 0;
}