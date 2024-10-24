#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 };                        //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src);                             //先拷贝一遍
	strcat(tmp, src);                             //再连接一遍
	return strstr(tmp, find) != NULL;             //看看找不找得到
}
int main()
{
	char s1[100];
	char s2[100];
	printf("输入字符串s1:");
	gets(s1);
	printf("输入字符串s2:");
	gets(s2);
	int ch =findRound(s1, s2);
	printf("%d\n", ch);
}

