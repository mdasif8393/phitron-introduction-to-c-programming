// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

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

    int compare;
    scanf("%d", &compare);

    int pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (compare == a[i])
        {
            pos = i;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}