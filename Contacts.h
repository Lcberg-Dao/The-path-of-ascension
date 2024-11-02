#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


#define NAME_MAX 10
#define SEX_MAX 5
#define Address_MAX 30
#define NUMBER_MAX 12
#define MAX 100
#define SZ 

//联系人信息
typedef struct Message
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char address[Address_MAX];
	char number[NUMBER_MAX];
}Message;

//联系人数量
typedef struct Contact
{
	Message list[MAX];
	int num;
}Contact;

//通讯录初始化
void Init_Contact(Contact* pc);

//增加联系人信息
void add_Contact(Contact* pc);

//删除联系人
void del_Contact(Contact* pc);

//修改联系人
void revise_Contact(Contact* pc);

//查找函数
void Lookup_Contact(Contact* pc);

//显示联系人
void show_Contac(Contact* pc);

//排序
void sort_Contac(Contact* pc);







