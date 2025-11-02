#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    int sum;
    scanf("%d", &sum);

    int x, y;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] = sum)
            {
                x = i;
                y = j;
                break;
            }
        }
    }

    printf("%d %d", x, y);

    return 0;
}