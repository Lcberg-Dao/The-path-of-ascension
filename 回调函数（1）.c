#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
void calc(int(*pf)(int, int))
{
	printf("请输入两个数：");
	int a, b;
	scanf("%d %d", &a, &b);
	int ret = pf(a, b);
	printf("结果为%d\n", ret);
}
int main()
{
	calc(Add);
	calc(Sub);
	return 0;
}