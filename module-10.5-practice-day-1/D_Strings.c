// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <stdio.h>
#include <string.h>

int main()
{

    char a[11];
    char b[11];

    scanf("%s", &a);
    scanf("%s", &b);

    int a_len = strlen(a);
    int b_len = strlen(b);

    printf("%d %d\n", a_len, b_len);
    printf("%s%s\n", a, b);

    char temp;

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);

    return 0;
}