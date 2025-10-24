// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include <stdio.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int compare = strcmp(a, b);

    if (compare < 0)
    {
        printf("%s", a);
    }
    else if (compare == 0)
    {
        printf("%s", a);
    }
    else if (compare > 0)
    {
        printf("%s", b);
    }

    return 0;
}