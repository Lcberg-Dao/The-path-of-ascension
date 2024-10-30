#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef void (*fun_callback_t)(int number);//声明回调函数指针

fun_callback_t g_fun_cb = NULL;           //定义回调函数指针

int set_callback(fun_callback_t cb);	   //声明设置回调函数

void my_fun(int number)
{
	number = number * 100;
	printf("In {my_fun} number:<%d>\n", number);
}

int main()
{
	printf("callback test start !\n");
	set_callback(my_fun);	//设置一个名称为my_fun的回调函数

	for (int i = 0; i < 5; i++)
	{
		printf("In {main} i:<%d>\n", i);
		g_fun_cb(i);		//通过回调函数指针调用回调函数
		printf("\n");
	}

	return 0;
}

int set_callback(fun_callback_t cb) //设置回调函数实现
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