#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	printf("«Î ‰»Î(1/0):");
	scanf("%d", a);

	if (a == 1)
	{
		printf("hello");
	}
	else
		printf("world");

	return 0;
}