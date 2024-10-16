#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char ch = 'w';
	char* p = &ch;
	printf("%c %c\n", ch, *p);

	char* sp = "abcdef";

	printf("%c\n", *sp);
	printf("%s\n", sp);
	return 0;
}