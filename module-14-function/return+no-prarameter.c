// #include <stdio.h>

// int sum()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     int ans = a + b;
//     return ans;
// }

// int main()
// {
//     int ans = sum();
//     printf("%d", ans);
//     return 0;
// }

#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);

    return a + b;
}

int main()
{
    printf("%d", sum());

    return 0;
}