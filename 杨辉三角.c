#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void triangle( int n)
{
	int arr[100][100] = { 1 };
	int i = 0;
	for (i = 1; i < n; i++)
	{
		arr[i][0] = 1;
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle(n);

	return 0;
}
