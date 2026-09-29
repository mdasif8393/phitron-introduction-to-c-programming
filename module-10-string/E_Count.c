// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
// #include <stdio.h>

// int main()
// {

//     char s[1000001];
//     scanf("%s", &s);

//     int length = strlen(s);
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum += s[i] - '0';
//     }

//     printf("%d", sum);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    gets(s);

    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        sum += s[i] - '0';
    }

    printf("%d", sum);

    return 0;
}