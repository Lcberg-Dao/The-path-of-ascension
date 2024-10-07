#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//char* my_strcat(char* str1, const char* str2, int num)
//{
//	char* cp = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//
//	int i = 0;
//	while (i<num && *str2)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//		i++;
//	}
//	return cp;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world!";
//
//	printf("你要追加几个字符:>");
//	int n = 0;
//	scanf("%d", &n);
//
//	my_strcat(arr1, arr2 ,n);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}