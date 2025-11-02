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

    int sum;
    scanf("%d", &sum);

    int x, y;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                x = a[i];
                y = a[j];
            }
            break;
        }
    }

    printf("%d %d", x, y);

    return 0;
}