#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////������ֵ����
//int main()
//{
//
//	int a = 0;
//
//	while (1)
//	{
//		printf("���������ֵΪ��");
//		scanf("%d", &a);
//		if (a >= 140)
//			printf("Genius\n");
//		else
//			printf("����Ŭ��\n");
//	}
//
//	return 0;
//}


//��ʽ
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int result = 0;
//
//	result = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", result);
//
//	return 0;
//}



////���ú���

//int a = 100;
//
//void test()
//{
//	printf("test:%d\n", a);
//}
//
//int main()
//{
//	
//	printf("%d\n", a);
//	test();
//	printf("%c\n", 59);
//	return 0;
//}

//int main()
//{
//	int M = 0;
//
//
//	printf("����������M��1<M<100000��:");
//	scanf("%d", &M);
//
//	if (M % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

\

//����
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = 1;
//		printf("%d", y);
//	}
//	else if (x == 0)
//	{
//		y = 0;
//		printf("%d", y);
//	}
//	else
//	{
//		y = -1;
//		printf("%d", y);
//	}
//	return 0;
//}



//����������
int main()
{
	int a = 0;
	int b = 0;
	int yu = 0;
	int shang = 0;

	scanf("%d %d", &a,&b);
	shang = a / b;
	yu = a % b;
	printf("%d %d", shang, yu);

	return 0;
}