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
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}