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
	printf("��Ҫ���ҵ���Ϊ:%d\n", a);
	int n = 0;
	int arr[100][100];
	printf("���þ���Ĵ�С:");
	scanf("%d", &n);
	printf("���������Ͼ���:\n");
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//����
	int k = my_find(arr, n, a);
	if (k == 1)
	{
		printf("�������������\n");
	}
	else
	{
		printf("������û�������\n");
	}
	return 0;
}