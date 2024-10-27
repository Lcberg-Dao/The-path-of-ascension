//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct Message
//{
//	char name[20];
//	int age;
//}Message;
//
//int main()
//{
//	Message s1[4];
//	Message tmp;
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("ÇëÊäÈëÐÕÃû:>");
//		scanf("%s", s1[i].name);
//		printf("ÇëÊäÈëÄêÁä:>");
//		scanf("%d", &(s1[i].age));
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%-10s\t%-10d\n", s1[i].name, s1[i].age);
//	}
//	printf("ÅÅÐòºó:\n");
//
//	//ÅÅÐò
//	for (i = 0; i < 3; i++)
//	{
//		if (memcmp(s1[i].name, s1[i + 1].name, 20) > 0)
//		{
//			tmp = s1[i + 1];
//			s1[i + 1] = s1[i];
//			s1[i] = tmp;
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%-10s\t%-10d\n", s1[i].name, s1[i].age);
//
//	}
//
//
//}