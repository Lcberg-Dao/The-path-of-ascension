#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;//��ʼ��n

	for (n = 101; n <= 200; n++)//forѭ����100������������101��ʼѭ����200
	{
		int j = 0;//������ʼ��

		for (j = 2; j < n; j++)//��2��ʼ����n��jȡ��,���n%j������0������ѭ��ֱ��n=j�����������n%j==0��ֱ������
		{
			if (n % j == 0)
				break;
		}

		if (n == j)
			printf("%d\n", n);//��ӡn=j������������
	}
	return 0;
}