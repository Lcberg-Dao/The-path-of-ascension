//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//
//	int amount = 0;
//	int* tmp = arr;
//	int* move = arr;
//
//	//从首元素开始查找
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp = arr;
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (*(move + j) == *(tmp+i))
//			{
//				amount++;
//			}
//		}
//		if (amount < 2)
//		{
//			printf("%d是单身狗\n", *(tmp + i));
//		}
//		amount = 0;
//	}
//	return 0;
//}