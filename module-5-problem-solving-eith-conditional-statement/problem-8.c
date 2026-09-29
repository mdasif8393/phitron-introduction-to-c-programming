// Given four numbers A, B, C and D. Print the result of the following equation :
//  X = (A * B) - (C * D).


#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long X = (A * B) - (C * D);

    printf("Difference = %lld\n", X);

    return 0;
}