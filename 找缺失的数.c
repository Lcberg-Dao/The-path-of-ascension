#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int nums[] = { 0 };
    int count = 0;
    int i = 0;
    while (1)
    {
        scanf("%d", &(nums[count]));
        count++;
        if (getchar() == '\n')
            break;
    }
    int val = 0;
    for (i = 0; i < count; i++)
    {
        val ^= nums[i];
    }
    for (i = 0; i <= count; i++)
    {
        val ^= i;
    }
   printf("%d",val);
   return 0;

}
