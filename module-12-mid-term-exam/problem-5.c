// Problem Link: http://hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-4

#include <stdio.h>

int main()
{
    char a[10001];
    scanf("%s", &a);

    int f[26] = {0};

    for (int i = 0; i < strlen(a); i++)
    {
        int val = a[i] - 'a';
        f[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            printf("%c - %d\n", i + 'a', f[i]);
        }
    }

    return 0;
}