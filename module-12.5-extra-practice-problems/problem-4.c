// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-08/challenges/khana-pina-2

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a % 3 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}