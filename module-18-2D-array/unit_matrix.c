// Take input a matrix and check if it’s a unit matrix or not.

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int unit_matrix = 1;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != 1)
                    {
                        unit_matrix = 0;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        unit_matrix = 0;
                    }
                }
            }
        }
    }
    else if (r != c)
    {
        printf("It is not a unit matrix");
    }

    if (unit_matrix == 1)
    {
        printf("It is a unit matrix");
    }
    else if (unit_matrix == 0)
    {
        printf("It is not a unit matrix");
    }

    return 0;
}