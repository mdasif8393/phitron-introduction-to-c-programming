#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);

        int len1 = strlen(s);
        int len2 = strlen(t);

        int len = len1 > len2 ? len1 : len2;

        for (int j = 0; j < len; j++)
        {
            if (j < len1)
            {
                printf("%c", s[j]);
            }

            if (j < len2)
            {
                printf("%c", t[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
