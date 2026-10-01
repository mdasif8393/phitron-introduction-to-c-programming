#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ch = 65;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 65; k <= ch; k++)
        {
            printf("%c ", k);
        }

        ch++;
        printf("\n");
    }
    return 0;
}