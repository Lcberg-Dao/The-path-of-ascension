#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int power(int x,int y)
{
	if (y != 0)
	{
		if (y != 0)
			return power(x, y - 1) * x;
		else if (y == 0)
			return 1;
	}
}

int main()
{
	int k = 0;
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d %d", &n, &k);

	printf("%d",power(n, k));

	return 0;
}