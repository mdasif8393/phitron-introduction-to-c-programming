// You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value  C and a character D as input and output them serially.

// #include<stdio.h>

// int main(){

//     int A;
//     long long int B;
//     double C;
//     char D;

//     scanf("%d %ld %lf %c", &A, &B, &C, &D);

//     printf("%d\n", A);
//     printf("%lld\n", B);
//     printf("%.2lf\n", C);
//     printf("%c\n", D);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a;
    long long int b;
    double c;
    char d;

    scanf("%d %ld %lf %c", &a, &b, &c, &d);

    printf("%d\n %ld\n %.2lf\n %c\n", a, b, c, d);
    return 0;
}