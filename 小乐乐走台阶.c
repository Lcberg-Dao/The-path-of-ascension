#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>

int step(int n)
{
	if (n <= 2)
		return n;
	else
		return step(n - 1) + step(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n",step(n));
	return 0;
}