#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int my_find(int arr[100][100], int n,int a)
{
	int right = n - 1;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i][right] < a)
		{
			i++;
		}
		else if (arr[i][right] > a)
		{
			right--;
		}
		else if (arr[i][right] == a && right >= 0)
			return 1;
		else
			return 0;
	}
}

int main()
{
	int a = 0;
	srand((unsigned)time(NULL));
	a = rand()%50;
	printf("需要查找的数为:%d\n", a);
	int n = 0;
	int arr[100][100];
	printf("设置矩阵的大小:");
	scanf("%d", &n);
	printf("请输入杨氏矩阵:\n");
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//查找
	int k = my_find(arr, n, a);
	if (k == 1)
	{
		printf("矩阵中有这个数\n");
	}
	else
	{
		printf("矩阵中没有这个数\n");
	}
	return 0;
}