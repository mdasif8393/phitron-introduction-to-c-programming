// problem: copy element from 2 separate array and paste to another 3rd array
#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);

    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    int n;
    scanf("%d", &n);

    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[m + n];

    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[i + m] = b[i];
    }
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}