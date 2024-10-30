#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef void (*fun_callback_t)(int number);//�����ص�����ָ��

fun_callback_t g_fun_cb = NULL;           //����ص�����ָ��

int set_callback(fun_callback_t cb);	   //�������ûص�����

void my_fun(int number)
{
	number = number * 100;
	printf("In {my_fun} number:<%d>\n", number);
}

int main()
{
	printf("callback test start !\n");
	set_callback(my_fun);	//����һ������Ϊmy_fun�Ļص�����

	for (int i = 0; i < 5; i++)
	{
		printf("In {main} i:<%d>\n", i);
		g_fun_cb(i);		//ͨ���ص�����ָ����ûص�����
		printf("\n");
	}

	return 0;
}

int set_callback(fun_callback_t cb) //���ûص�����ʵ��
{
	if (g_fun_cb != NULL)
	{
		printf("g_fun_cb is not NULL!\n");
		return 0;
	}
	else
	{
		g_fun_cb = cb;
		return 1;
	}
}