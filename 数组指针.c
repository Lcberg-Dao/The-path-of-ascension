//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*sp)[10] = &arr;
//
//	printf("%p	%p\n", arr, arr + 1);//arr为首元素的地址
//	printf("%p	%p\n", &arr[0], &arr[0] + 1);//&arr[0]为首元素地址
//	printf("%p	%p\n", &arr, &arr + 1);//&arr为整个数组的地址
//
//	return 0;
//}