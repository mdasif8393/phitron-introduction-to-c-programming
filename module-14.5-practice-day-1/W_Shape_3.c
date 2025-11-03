// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    int star2 = star - 2;
    int space2 = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space2; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star2; j++)
        {
            printf("*");
        }
        printf("\n");
        star2 -= 2;
        space2++;
    }

    return 0;
}