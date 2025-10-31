// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-08/challenges/n-kites

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}