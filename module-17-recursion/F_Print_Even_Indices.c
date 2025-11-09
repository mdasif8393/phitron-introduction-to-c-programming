#include <stdio.h>

void array_recursion(int a[], int n, int i)
{

    if (i >= n)
    {
        return;
    }

    array_recursion(a, n, i + 2);
    printf("%d ", a[i]);
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    array_recursion(a, n, 0);

    return 0;
}