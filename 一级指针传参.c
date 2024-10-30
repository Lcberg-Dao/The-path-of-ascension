#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(int* str, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(str + i));
	}
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	int sz = sizeof(arr)/sizeof(arr[0]);

	print(p, sz);
	return 0;
}