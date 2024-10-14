#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int s = 0;
	int m = 0;
	int h = 0;

	scanf("%d", &s);
	m = s / 60;
	h = m / 60;
	printf("%d %d %d\n", h, m, s);

	return 0;
}