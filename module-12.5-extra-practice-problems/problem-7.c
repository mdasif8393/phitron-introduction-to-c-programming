// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-08/challenges/zeros-and-ones-02

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (i == x - 1)
        {
            if (a[i] == 0)
            {
                printf("1 ");
            }
            else if (a[i] == 1)
            {
                printf("0 ");
            }
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}