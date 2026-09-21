// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         int x,y;
//         scanf("%d %d", &x, &y);

//         int sum = 0;
//         if(x<y){
//             for(int i=x+1; i<y; i++){
//                 if(i%2 != 0){
//                     sum = sum + i;
//                 }
//             }

//         }
//         else{
//             for(int i=y+1; i<x; i++){
//             if(i%2 != 0){
//                 sum = sum + i;
//             }
//             }
//             }
//         printf("%d\n", sum);
//         }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int max, min;

        if (x > y)
        {
            max = x;
            min = y;
        }
        else
        {
            max = y;
            min = x;
        }

        int sum = 0;
        for (int i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}