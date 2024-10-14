#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;//初始化n

	for (n = 101; n <= 200; n++)//for循环，100不是素数，从101开始循环到200
	{
		int j = 0;//除数初始化

		for (j = 2; j < n; j++)//从2开始除，n对j取余,如果n%j不等于0，继续循环直到n=j，跳出，如果n%j==0，直接跳出
		{
			if (n % j == 0)
				break;
		}

		if (n == j)
			printf("%d\n", n);//打印n=j的数就是素数
	}
	return 0;
}