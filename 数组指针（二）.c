//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;
//	int* p2 = &arr[0];
//	int* p3 = &arr;
//
//	int i = 0;
//	printf("��p1��ӡ����\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p1 + i));
//	}
//	printf("\n");
//	printf("��p2��ӡ����\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p2[i]);
//	}
//	printf("\n");
//	printf("��p3��ӡ����\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}