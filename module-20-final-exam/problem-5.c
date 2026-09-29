#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int upper_line = (n + 11) / 2; // Correct number of upper rows
    int width = n + 10;            // Last row star count

    int star = 1;
    int space = (width - star) / 2;

       for (int i = 1; i <= upper_line; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");

        star += 2;
        space = (width - star) / 2; // recalculate space
    }

    int lower_space = (width - n) / 2;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= lower_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
