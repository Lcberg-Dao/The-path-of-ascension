#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int sn = 0;
	for (a = 1; a <= 5; a++)
	{
		sn = a + (a + a * 10) + (a + a * 10 + a * 100) + (a + a * 10 + a * 100 + a * 1000) + (a + a * 10 + a * 100 + a * 1000 + a * 10000);
		printf("%d ", sn);
	}
	return 0;
}