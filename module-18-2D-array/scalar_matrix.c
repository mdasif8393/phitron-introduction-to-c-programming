// Take input a matrix and check if it’s a scalar matrix or not.

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

    int square_matrix = 1;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != a[0][0])
                    {
                        square_matrix = 0;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        square_matrix = 0;
                    }
                }
            }
        }
    }
    else if (r != c)
    {
        printf("It is not a square matrix");
    }

    if (square_matrix == 1)
    {
        printf("It is a square matrix");
    }
    else if (square_matrix == 0)
    {
        printf("It is not a square matrix");
    }

    return 0;
}