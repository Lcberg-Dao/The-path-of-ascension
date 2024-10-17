#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int DigitSum(int x)
{
	if (x / 10 != 0)
		return x % 10 + DigitSum(x / 10);
	else if (x / 10 == 0)
		return x%10;

}


int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", DigitSum(a));

	return 0;
}