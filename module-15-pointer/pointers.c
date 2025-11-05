#include <stdio.h>

int main()
{

    int x = 100;

    int *ptr = &x;

    printf("%p\n", ptr);

    *ptr = 200;

    printf("%d\n", *ptr);

    return 0;
}