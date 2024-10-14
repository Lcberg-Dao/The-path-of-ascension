#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int t = 0;

    while (scanf("%d", &t) == 1)
    {
        if (t < 0)
            printf("0\n");
        else if (0 == t)
            printf("0.5\n");
        else
            printf("1\n");
    }

    return 0;
}