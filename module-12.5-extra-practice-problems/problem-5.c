// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-08/challenges/khana-pina-3

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else if (i % 3 != 0 || i % 5 != 0)
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}