// https://docs.google.com/document/d/1uzoOl9K0McJaxyy_o0p4la_sGCC8A-O8/edit
#include <stdio.h>

int small_to_capital(char x)
{
    return x - 32;
}

int main()
{
    char x;
    scanf("%c", &x);

    char result = small_to_capital(x);
    printf("%c", result);

    return 0;
}