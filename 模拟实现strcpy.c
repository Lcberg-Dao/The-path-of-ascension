#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* str1, const char* str2)
{
	assert(str1 && str2);
	char* cp = str1;

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
	char arr1[20] = {0};
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}