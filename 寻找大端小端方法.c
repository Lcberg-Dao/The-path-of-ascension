#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		printf("С�˴洢\n");
	else
		printf("��˴洢\n");
	return 0;
}