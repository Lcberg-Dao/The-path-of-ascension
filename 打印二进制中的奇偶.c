#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void print(int n)
{
	int  i = 0;
	for (i = 0; i < 32; i += 2)
		printf("%d",((n >> i) & 1));        //��ӡ����
	printf("\n");
	for (i = 1; i < 32; i += 2)
		printf("%d", ((n >> i) & 1));     //��ӡż��
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);

	return 0;
}