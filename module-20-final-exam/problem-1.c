// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/find-the-missing-number-11-3

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int mul, a, b, c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);

        if (mul % (a * b * c) == 0)
        {
            long long int ans = mul / (a * b * c);
            printf("%lld\n", ans);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}