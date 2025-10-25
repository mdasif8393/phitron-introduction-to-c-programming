// Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-2-2

#include <stdio.h>

int main()
{

    char s[100001];
    scanf("%s", &s);

    int s_len = strlen(s);

    int consonants = 0;

    for (int i = 0; i < s_len; i++)
    {
        if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
        {
            consonants++;
        }
    }

    printf("%d", consonants);

    return 0;
}