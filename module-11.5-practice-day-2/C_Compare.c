// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
// #include <stdio.h>

// int main()
// {
//     char a[21], b[21];
//     scanf("%s %s", &a, &b);

//     int compare = strcmp(a, b);

//     if (compare < 0)
//     {
//         printf("%s", a);
//     }
//     else if (compare == 0)
//     {
//         printf("%s", a);
//     }
//     else if (compare > 0)
//     {
//         printf("%s", b);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int val = strcmp(a, b);

    if (val < 0)
    {
        printf("%s", a);
    }
    else if (val > 0)
    {
        printf("%s", b);
    }
    else
    {
        printf("%s", a);
    }

    return 0;
}