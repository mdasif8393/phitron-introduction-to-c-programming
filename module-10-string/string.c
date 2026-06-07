// #include <stdio.h>

// int main()
// {

//     char a[4];
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%c", &a[i]);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%c", a[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()

{

    int a[5];

    printf("%d", sizeof(a) / sizeof(int)); // এরে মেমরিতে কত জায়গা নেয় (২০) সেটিকে একটি ইন্টিজার ভেরিয়েবল কত জায়গা নেয়(৪) তা দিয়ে ভাগ করা হচ্ছে। তাহলে ভাগফল আসবে ২০ / ৪ = ৫ যা হচ্ছে আমাদের এরের একচুয়াল সাইজ।

    return 0;
}