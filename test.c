#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>

int main()
{
	int a[4][10];
	int* p;
	int* q[4];
	p = a;
	q[1] = a[1];
	p = a[1];
	p = &a[2][1];

}
