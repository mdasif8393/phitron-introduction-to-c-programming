// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    for(int i =1; i<=x; i++)
    {
        int n;
        scanf("%d", &n);
        long long fac = 1;

        if(n == 0){
           fac = 1;
        }
        else
        {
            for(int i =1; i<=n; i++)
            {
                fac = fac * i;
            } 
        }
        printf("%lld\n", fac);
    }
    
    return 0;
}