// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int firstNum = n/10;
    int lastNum = n%10;
    
    if(firstNum % lastNum == 0 || lastNum % firstNum == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}