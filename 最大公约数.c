#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���Լ����
////��a����b���õ�����c��
//��b��ֵ��a����c��ֵ��b��
//�ظ��������裬ֱ��c����0����ʱ��b��Ϊ���Լ��1��
//�ýϴ������Խ�С�������ó��ֵ�����ȥ����������˷�����ֱ�����������0Ϊֹ�����Ϊ0�������Ϊ���Լ��

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d", &a, &b);

	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	if (a % b == 0)
		printf("%d\n", b);

	return 0;
}