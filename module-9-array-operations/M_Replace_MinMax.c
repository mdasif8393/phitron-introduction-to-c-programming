// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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

    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[minIndex] < a[i])
        {
            minIndex = i;
        }
        if (a[maxIndex] > a[i])
        {
            maxIndex = i;
        }
    }

    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}