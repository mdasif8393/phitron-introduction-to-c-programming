// Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-3
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         char a[10001];
//         scanf("%s", a);

//         int small_alp = 0;
//         int capital_alp = 0;
//         int digit = 0;

//         for (int i = 0; i < strlen(a); i++)
//         {
//             if (a[i] >= '0' && a[i] <= '9')
//             {
//                 digit++;
//             }
//             else if (a[i] >= 'a' && a[i] <= 'z')
//             {
//                 small_alp++;
//             }
//             else if (a[i] >= 'A' && a[i] <= 'Z')
//             {
//                 capital_alp++;
//             }
//         }

//         printf("%d %d %d\n", capital_alp, small_alp, digit);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[10001];
        scanf("%s", &s);

        int c = 0, sm = 0, d = 0;
#include <stdio.h>

        int main()
        {

            return 0;
        }
        int len = strlen(s);

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                c++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                sm++;
            }
            else
            {
                d++;
            }
        }

        printf("%d %d %d\n", c, sm, d);
    }

    return 0;
}