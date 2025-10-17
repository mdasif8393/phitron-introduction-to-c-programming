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

    long long sum;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    if (sum < 0)
    {
        sum = sum * -1;
    }

    printf("%lld", sum);

    return 0;
}