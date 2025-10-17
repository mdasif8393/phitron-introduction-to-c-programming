// Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges

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

    int positiveSum = 0;
    int negativeSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negativeSum = negativeSum + a[i];
        }
        else
        {
            positiveSum = positiveSum + a[i];
        }
    }

    printf("%d %d", positiveSum, negativeSum);

    return 0;
}