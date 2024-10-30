#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int (*p[4])(const char*);

	int (*pf[5])(int, int) = { NULL,Add,Sub,Mul,Dir };

	return 0;
}