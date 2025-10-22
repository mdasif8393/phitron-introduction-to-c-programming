// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}