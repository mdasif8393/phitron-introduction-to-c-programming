#include <stdio.h>

void fun(int *p)
{
    // change value of x
    // *p = 20;
    printf("%d", *p);
}

int main()
{
    int x = 30;
    fun(&x);
    return 0;
}