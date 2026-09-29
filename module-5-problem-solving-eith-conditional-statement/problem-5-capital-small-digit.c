// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// #include<stdio.h>

// int main(){
//     char ch;
//     scanf("%c", &ch);

//     if(ch >= '0' && ch <= '9'){
//         printf("IS DIGIT");
//     }
//     else{
//         printf("ALPHA\n");
//         if(ch >= 'a' && ch <= 'z'){
//             printf("IS SMALL");
//         }
//         else{
//             printf("IS CAPITAL");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 65 && c <= 122)
    {
        printf("ALPHA\n");
        if (c >= 65 && c <= 90)
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}