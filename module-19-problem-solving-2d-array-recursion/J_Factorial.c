// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include <stdio.h>

long long int rec(int n)
{
    if (n == 1)
    {
        return 1;
    }

    long long int fac = rec(n - 1);
    return fac * n;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int ans = rec(n);
    printf("%lld", ans);

    return 0;
}