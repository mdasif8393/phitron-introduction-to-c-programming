// Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/farmers-1
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int ans = (m1 * d) / (m1 + m2);

        printf("%d\n", d - ans);
    }

    return 0;
}