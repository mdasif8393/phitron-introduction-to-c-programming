#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int digit = 1, space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= digit; k++)
        {
            printf("%d", k);
        }

        digit++;
        space--;
        printf("\n");
    }

    return 0;
}