#include <stdio.h>

int main()
{

    int a[5] = {10, 20, 30, 40, 50};

    printf("%d\n", *a);
    printf("%p\n", &a[0]);

    return 0;
}