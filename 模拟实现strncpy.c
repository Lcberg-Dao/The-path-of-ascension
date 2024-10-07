#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* str1, const char* str2 ,int num)
//{
//	assert(str1 && str2);
//	char* cp = str1;
//	int i = 0;
//	
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
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	int n = 0;
//	printf("ÄãÒª¿½±´¼¸¸ö×Ö·û:>");
//	scanf("%d", &n);
//
//	my_strncpy(arr1, arr2, n);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}