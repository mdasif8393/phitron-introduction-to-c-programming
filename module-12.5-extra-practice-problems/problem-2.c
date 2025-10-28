// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-08/challenges/multiply-16-2

#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int result = a * b;

    printf("%lld", result);

    return 0;
}