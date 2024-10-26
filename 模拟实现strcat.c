#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char* my_strcat(char* str1, const char* str2)
{
	char* cp = str1;
	while (*str1)
	{
		str1++;
	}

	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	return cp;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world!";

	my_strcat(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}