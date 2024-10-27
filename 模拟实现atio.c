//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int my_atoi(char*str)
//{
//	int sz = sizeof(*str);
//	int i = 0;
//	int k = 0;
//	char tmp[256];
//
//	for (i = 0; i < sz; i++)
//	{
//		if (*(str + i) >= '0' && *(str + i) <= '9')
//		{
//			tmp[k] = *(str + i);
//			k++;
//		}
//		else
//			break;
//	}
//}
//
//int main()
//{
//	int i;
//	char buffer[256];
//	printf("Enter a number: ");
//	fgets(buffer, 256, stdin);
//	i =my_atoi(buffer);
//	printf("The value entered is %d. Its double is %d.\n", i, i * 2);
//	return 0;
//}