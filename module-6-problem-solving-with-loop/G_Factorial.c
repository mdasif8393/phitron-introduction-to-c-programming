// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

// #include<stdio.h>

// int main(){
//     int x;
//     scanf("%d", &x);

//     for(int i =1; i<=x; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         long long fac = 1;

//         if(n == 0){
//            fac = 1;
//         }
//         else
//         {
//             for(int i =1; i<=n; i++)
//             {
//                 fac = fac * i;
//             }
//         }
//         printf("%lld\n", fac);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x;
        scanf("%d", &x);

        if (x == 0)
        {
            printf("1");
        }
        else
        {
            int fac = 1;
            for (int i = 1; i <= x; i++)
            {
                fac *= i;
            }

            printf("%d\n", fac);
        }
    }
    return 0;
}