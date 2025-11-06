#include <stdio.h>

int main()
{
    int a[4] = {1, 2, 3, 4};
    // printf("%d", *a);
    int *p;
    p = a + 3;
    *p = 5;
    printf("%d", a[3]);
    return 0;
}