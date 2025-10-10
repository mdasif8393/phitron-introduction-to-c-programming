// You will be given two integers A and B. You need to give output their multiplication.

#include<stdio.h>

int main(){

    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long multiply = A * B;

    printf("%lld", multiply);
    
    return 0;
}