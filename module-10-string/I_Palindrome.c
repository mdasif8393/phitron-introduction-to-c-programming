// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    scanf("%s", &a);

    const a_length = strlen(a);
    for (int i = 0, j = a_length - 1; i < j; i++, j--)
    {
        printf("%c %c\n", a[i], a[j]);
    }
    return 0;
}