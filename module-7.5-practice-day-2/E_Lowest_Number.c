// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

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

    int min = a[0];
    int pos = 1; // 1-indexed position

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            pos = i + 1; // 1-indexed position
        }
    }

    printf("%d %d\n", min, pos);

    return 0;
}
