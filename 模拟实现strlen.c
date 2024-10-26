#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_strlen(const char* str)
{
	char* sp = str;
	while (*sp)
	{
		sp++;
	}
	return sp-str;
}

int main()
{
	char arr[] = "hello";

	int ch = my_strlen(arr);
	printf("%d\n", ch);

	return 0;
}