#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		printf("Ð¡¶Ë´æ´¢\n");
	else
		printf("´ó¶Ë´æ´¢\n");
	return 0;
}