// #include <stdio.h>

// int main()
// {

//     int n;
//     int sum = 0;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//         printf("%d\n", sum);
//     }

//     printf("%d", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{

    int sum = 0;

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}