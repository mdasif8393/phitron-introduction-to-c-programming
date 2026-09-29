// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char s[1000001];
//     scanf("%s", &s);

//     int freq[26] = {0};

//     int len = strlen(s);

//     for (int i = 0; i < len; i++)
//     {
//         freq[s[i] - 'a']++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] > 0)
//         {
//             printf("%c : %d\n", 'a' + i, freq[i]);
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000001];
    scanf("%s", &s);

    int len = strlen(s);

    int freq[26] = {0};

    for (int i = 0; i < len; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}