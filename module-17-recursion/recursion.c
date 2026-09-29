#include <stdio.h>

void hello()
{
    printf("Hello\n");
    hello();
}

int main()
{

    printf("HI\n");
    hello();

    return 0;
}