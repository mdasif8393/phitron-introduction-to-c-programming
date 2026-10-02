#include <stdio.h>

void evenOdd1()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

int main()
{

    evenOdd1();

    return 0;
}