#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	int mov = strlen(arr2);
	int pr = strlen(arr1);
	gets(arr1);
	gets(arr2);
	int flag = 0;

	int i = 0;
	int j = 0;

	for (i = 0; i < pr; i++)
	{
		flag = 0;
		for (j = 0; j < mov; j++)
		{
			if (arr1[i] == arr2[j])
			{
				break;
			}
			else
				flag = 1;
		}
		if (flag == 1)
		{
			printf("%c", arr1[i]);
		}
	}
	return 0;
}