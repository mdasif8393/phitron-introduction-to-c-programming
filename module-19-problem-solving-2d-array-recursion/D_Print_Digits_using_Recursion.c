// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <stdio.h>

void recursion(n)
{
    if (n == 0)
    {
        return;
    }

    recursion(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n == 0)
        {
            printf("0");
        }

        recursion(n);
        printf("\n");
    }

    return 0;
}