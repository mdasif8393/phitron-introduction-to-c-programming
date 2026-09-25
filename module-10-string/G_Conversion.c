// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[100001];
//     scanf("%s", &s);

//     int s_length = strlen(s);

//     for (int i = 0; i < s_length; i++)
//     {
//         if (s[i] == ',')
//         {
//             printf("%c", s[i] - 12);
//         }
//         if (s[i] >= 97 && s[i] <= 122)
//         {
//             printf("%c", s[i] - 32);
//         }
//         if (s[i] >= 65 && s[i] <= 90)
//         {
//             printf("%c", s[i] + 32);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{

    char s[100001];
    gets(s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        else
        {
            printf(" ");
        }
    }

    return 0;
}