#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1, str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}


int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abzd";
	
	//�Ƚ������ַ�����С
	int ch = my_strcmp(arr1, arr2);

	if (ch < 0)
	{
		printf("arr1С��arr2\n");
	}
	else if (ch == 0)
	{
		printf("arr1����arr2\n");
	}
	else
		printf("arr1����arr2\n");

	return 0;
}