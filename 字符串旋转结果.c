#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 };                        //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
	strcpy(tmp, src);                             //�ȿ���һ��
	strcat(tmp, src);                             //������һ��
	return strstr(tmp, find) != NULL;             //�����Ҳ��ҵõ�
}
int main()
{
	char s1[100];
	char s2[100];
	printf("�����ַ���s1:");
	gets(s1);
	printf("�����ַ���s2:");
	gets(s2);
	int ch =findRound(s1, s2);
	printf("%d\n", ch);
}

