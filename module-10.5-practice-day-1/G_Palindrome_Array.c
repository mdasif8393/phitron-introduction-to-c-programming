// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

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

    int b[n];

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        b[j] = a[i];
    }

    int palindrome = 1;

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