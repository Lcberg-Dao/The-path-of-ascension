#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define SWAP(num) (int)(((num&0x55555555)<<1)+((num&0xaaaaaaaa)>>1))

int main()
{
	int a = 10;
	printf("%d\n", SWAP(a));
	return 0;
}