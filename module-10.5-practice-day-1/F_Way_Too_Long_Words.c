// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[101];

        scanf("%s", &s);

        int count = 0;

        int s_length = strlen(s);
        if (s_length <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c", s[0]);
            for (int i = 1; i < s_length - 1; i++)
            {
                count++;
            }
            printf("%d", count);
            printf("%c\n", s[s_length - 1]);
        }
    }

    return 0;
}