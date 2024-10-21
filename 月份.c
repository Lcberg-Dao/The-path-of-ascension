#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int a, b;
    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (b == 2)
        {
            if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            {
                printf("%d\n", (month[b] + 1));
            }
            else
                printf("%d\n", month[b]);
        }
        else
            printf("%d\n", month[b]);
    }
    return 0;
}