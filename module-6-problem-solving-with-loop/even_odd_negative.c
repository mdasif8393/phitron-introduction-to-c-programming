// Given N numbers. Count how many of these values are even, odd, positive and negative.

#include<stdio.h>

int main(){
    
    int n;
     int x;
     int even = 0;
     int odd = 0;
     int positive = 0;
     int negative = 0;
    
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &x);

        if(x % 2 == 0){
            even ++;
        }
        if(x % 2 != 0){
            odd ++;
        }
        if( x > 0 ){
            positive ++;
        }
        if( x < 0 ){
            negative ++;
        }
       
    }
     printf("Even: %d\n", even);
     printf("Odd: %d\n", odd);
     printf("Positive: %d\n", positive);
     printf("Negative: %d\n", negative);

    

    return 0;
}