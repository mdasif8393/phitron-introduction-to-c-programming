// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
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
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}