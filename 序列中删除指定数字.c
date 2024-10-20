#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void find(int arr[], int k, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != k)
			printf("%d ", arr[i]);
		else
			continue;

	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int arr[50];
	int i = 0;
	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	int b = 0;
	scanf("%d", &b);
	find(arr, b, a);
	return 0;
}