#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(int* sp)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(sp + i));
	}
}

int main()
{
	int arr[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	print(arr);
	return 0;
}