// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int sum;
//     scanf("%d", &sum);

//     int flag = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == sum)
//             {
//                 flag = 1;
//             }
//         }
//     }

//     if (flag == 0)
//     {
//         printf("No\n");
//     }
//     else
//     {
//         printf("Yes\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int val;
    scanf("%d", &val);

    int flag = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == val)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}