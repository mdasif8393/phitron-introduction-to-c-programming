#include <stdio.h>

void fun(char s[])
{
    printf("%s\n", s);

    int sz = strlen(s);
    printf("%d", sz);
}

int main()
{

    char s[10];
    scanf("%s", &s);

    fun(s);

    return 0;
}

// #include <stdio.h>

// void fun(char a[])
// {
//     printf("%s", a);
// }

// int main()
// {

//     char a[10];
//     scanf("%s", &a);

//     fun(a);

//     return 0;
// }