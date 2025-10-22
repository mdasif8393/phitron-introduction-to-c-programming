#include <stdio.h>
#include <string.h>

int main()
{

    char a[101], b[101];
    scanf("%s %s", &a, &b);

    const a_length = strlen(a);
    const b_length = strlen(b);

    for (int i = 0; i <= b_length; i++)
    {
        a[i + a_length] = b[i];
    }

    printf("%s %s", a, b);
    return 0;
}