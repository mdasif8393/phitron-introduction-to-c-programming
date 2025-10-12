//* Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

#include<stdio.h>

int main(){
    
    char ch;
    scanf("%c", &ch);

    char result;

    if(ch >= 'a' && ch <= 'z'){
        printf("%c", ch -32);
    }
    else{
        printf("%c", ch + 32);
    }

    return 0;
}