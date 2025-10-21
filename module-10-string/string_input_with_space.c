#include <stdio.h>
#include <string.h>

int main()
{

    char s[50];
    fgets(s, 35, stdin);

    printf("%s", s);

    return 0;
}