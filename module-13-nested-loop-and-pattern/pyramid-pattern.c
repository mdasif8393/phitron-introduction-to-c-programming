// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n - 1;

//     for (int i = 1; i <= n; i++) // for printing line
//     {
//         for (int j = space; j >= 1; j--) // for printing space
//         {
//             printf(" ");
//         }

//         for (int k = 1; k <= star; k++) // for printing *
//         {
//             printf("*");
//         }
//         printf("\n");
//         star += 2;
//         space--;
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= space; l++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        space--;
        k += 2;
        printf("\n");
    }
    return 0;
}
