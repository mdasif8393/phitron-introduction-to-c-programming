// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    int f[m];
    for (int i = 0; i <= m; i++)
    {
        f[i] = 0;
    }

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        f[val]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", f[i]);
    }

    return 0;
}