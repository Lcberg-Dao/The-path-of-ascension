#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_strlen(char* str)
{
	int i = 0;
	if (*str != '\0')
	return i = 1 + my_strlen(str + 1);
}

int main()
{
	printf("%d",my_strlen("hello worllld!"));

	return 0;
}