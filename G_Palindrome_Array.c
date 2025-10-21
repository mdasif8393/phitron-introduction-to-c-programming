// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

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

    if (a[0] == a[n - 1])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}