#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	printf("%d\n", Add(2, 3));
	int (*p)(int, int) = &Add;
	printf("%d\n", (*p)(2, 3));

	return 0;
}