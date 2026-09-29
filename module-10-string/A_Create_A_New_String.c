// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[1001];
//     char s2[1001];

//     scanf("%s %s", &s1, &s2);

//     int s1_length = strlen(s1);
//     int s2_length = strlen(s2);

//     printf("%d %d\n", s1_length, s2_length);
//     printf("%s %s", s1, s2);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{

    char s1[1001];
    char s2[1001];

    gets(s1);
    gets(s2);

    int s1Len = strlen(s1);
    int s2Len = strlen(s2);

    printf("%d %d\n", s1Len, s2Len);
    printf("%s %s", s1, s2);

    return 0;
}