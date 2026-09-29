#include <stdio.h>

int is_palindrome(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;

    if (j == 0)
    {
        return 1;
    }

    while (i < j)
    {
        if (a[i] != a[j])
        {

            return 0;
        }

        i++;
        j--;
    }
    return 1;
}

int main()
{

    char a[1001];
    scanf("%s", &a);

    int p = is_palindrome(a);

    if (p == 1)
    {
        printf("Palindrome");
    }
    else if (p == 0)
    {
        printf("Not Palindrome");
    }

    return 0;
}