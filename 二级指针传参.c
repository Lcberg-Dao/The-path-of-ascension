#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test1(int** str)
{
	printf("%d", **str);
}
void test2(int* str)
{
	printf("%d", *str);
}
int main()
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test1(pp);
	test1(&p);
	test2(p);

	return 0;
}