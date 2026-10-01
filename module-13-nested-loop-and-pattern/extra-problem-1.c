// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int star = 1;
//     int space = n - 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = 1; k <= space; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)
//         {
//             printf("* ");
//         }
//         star++;
//         printf("\n");
//         space--;
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1, star = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("* ");
        }

        space--;
        star++;
        printf("\n");
    }
    return 0;
}