// Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

// #include<stdio.h>

// int main(){
//     int pass;
//     while(scanf("%d", &pass)){
//         if(pass == 1999){
//             printf("Correct\n");
//             break;
//         }
//         else{
//             printf("Wrong\n");
//         }

//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int x;
    while (scanf("%d", &x))
    {
        if (x == 1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}