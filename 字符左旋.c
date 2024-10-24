#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void my_move(char* sp,char sto[], int m, int ch)
{
	int i = 0;
	for (i = 0; i < m; i++)
	{
		sto[i] = *(sp + i);
	}
	for (i = 0; i < ch - m; i++)
	{
		*(sp + i) = *(sp + i + m);
	}
	for (i = 0; i < m; i++)
	{
		*(sp + ((ch - m) + i)) = sto[i];
	}
}

int main()
{
	char arr[100];
	char sto[100];
	printf("ÊäÈë×Ö·û´®:");
	gets(arr);
	int m = 0;
	printf("ÇëÊäÈë×óÐý×Ö·û¸öÊý:");
	scanf("%d", &m);
	//¼ÆËã×Ö·û¸öÊý
	int ch = strlen(arr);
	//×óÐý
	my_move(arr,sto, m, ch);
	printf("%s", arr);

	return 0;
}