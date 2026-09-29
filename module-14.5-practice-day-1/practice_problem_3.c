// https://docs.google.com/document/d/1uzoOl9K0McJaxyy_o0p4la_sGCC8A-O8/edit
#include <stdio.h>

int char_to_ascii(char x)
{
    return x;
}

int main()
{
    char x;
    scanf("%c", &x);

    int result = char_to_ascii(x);
    printf("%d", result);

    return 0;
}