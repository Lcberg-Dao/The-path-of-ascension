#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;

	while (scanf("%d", &a) == 1)
	{
		int i = 0;

		while (i < a)
		{
			printf("*");
			i++;
		}

		printf("\n");
	}

	return 0;
}