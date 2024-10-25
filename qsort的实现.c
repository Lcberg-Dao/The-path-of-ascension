#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

struct stu
{
	char name[20];
	int age;

};

int cmp_int_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}


int main()
{
	struct stu s1[3] = { {"wangling",20},{"caokai",19},{"zhanghua",30} };
	int sz = sizeof(s1) / sizeof(s1[0]);

	qsort(s1, sz, sizeof(s1[0]), cmp_int_name);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", s1[i]);
	}

	return 0;
}