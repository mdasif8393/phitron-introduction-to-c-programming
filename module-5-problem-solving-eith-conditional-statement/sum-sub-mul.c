//* Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

#include <stdio.h>

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);

    long long sum = x + y;
    long long mul = x * y;
    long long sub = x - y;

    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, mul);
    printf("%lld - %lld = %lld\n", x, y, sub);

    return 0;
}