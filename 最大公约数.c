#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//最大公约数求法
////用a除以b，得到余数c。
//将b赋值给a，将c赋值给b。
//重复上述步骤，直到c等于0。此时，b即为最大公约数1。
//用较大数除以较小数，再用出现的余数去除除数，如此反复，直到最后余数是0为止。最后为0，则除数为最大公约数

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d", &a, &b);

	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	if (a % b == 0)
		printf("%d\n", b);

	return 0;
}