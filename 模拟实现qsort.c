#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//用来交换
void swap(char* sp1, char* sp2, size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *sp1;
		*sp1 = *sp2;
		*sp2 = tmp;
		sp1++;
		sp2++;
	}
}

//com_int用来比较e1和e2的大小
int com_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//模拟实现qsort
int my_qsort(void* base, size_t sz, size_t width, int(*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int main()
{
	int arr[] = { 2,4,7,9,1,4,7,3,10,8,1,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	my_qsort(arr, sz, sizeof(arr[0]), com_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}