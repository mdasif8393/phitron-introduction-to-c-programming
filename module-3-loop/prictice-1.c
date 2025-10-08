// Write a c program to print 8’s time table to 200

#include<stdio.h>

int main(){


    for(int i = 100; i >= 1; i--){

        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    

    return 0;
}