// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    scanf("%s", &a);

    int n = strlen(a);

    int palindrome = 1;

    int b[1001];

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        b[j] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            palindrome = 0;
        }
    }
    if (palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}