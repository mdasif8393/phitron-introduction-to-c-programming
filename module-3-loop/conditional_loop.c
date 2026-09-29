// #include <stdio.h>

// int main()
// {

//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d- Even Number\n", i);
//         }
//         else
//         {
//             printf("%d- Odd Number\n", i);
//         }
//     }

//     return 0;
// };

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {

        if (i == 5)
        {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}