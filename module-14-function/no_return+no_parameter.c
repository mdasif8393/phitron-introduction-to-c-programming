// #include <stdio.h>

// void sum()
// {

//     int a = 12, b = 23;
//     printf("%d", a + b);
// }

// int main()
// {
//     sum();
//     return 0;
// }

#include <stdio.h>

void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", a + b);
}

int main()
{
    sum();

    return 0;
}