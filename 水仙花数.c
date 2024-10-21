#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int sum = 0;
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		d = i / 1000 % 10;
		e = i / 10000 % 10;
		sum = (a * a * a) + (b * b * b) + (c * c * c) + (d * d * d) + (e * e * e);
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}