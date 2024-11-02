#define _CRT_SECURE_NO_WARNINGS 1

#include "Contacts.h"

//通讯录初始化
void Init_Contact(Contact* pc)
{
	pc->num = 0;
	memset(pc->list, 0, sizeof(pc->list));
}


//查找函数
int Fide_name(Contact* pc, char* name)
{
	int i = 0;
	for (i = 0; i < pc->num; i++)
	{
		if (strcmp(pc->list[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;

}

//增加联系人
void add_Contact(Contact* pc)
{
	if (pc->num == MAX)
	{
		printf("联系人列表已满，请清理后添加!\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pc->list[pc->num].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->list[pc->num].age));
		printf("请输入性别:>");
		scanf("%s", pc->list[pc->num].sex);
		printf("请输入住址:>");
		scanf("%s", pc->list[pc->num].address);
		printf("请输入电话号码:>");
		scanf("%s", pc->list[pc->num].number);
		pc->num = pc->num + 1;
	}
}

//删除联系人
void del_Contact(Contact* pc)
{
	assert(pc);

	if (pc->num == 0)
	{
		printf("已无联系人!\n");
	}
	int k = 0;
	char name[NAME_MAX];
	printf("请输入要删除的联系人姓名:>");
	scanf("%s", name);
	//查找
	int ret = Fide_name(pc, name);

	//删除
	if (ret >= 0 && ret < pc->num)
	{
		memmove(pc->list + ret, pc->list + 1 + ret, (pc->num - ret) * sizeof(pc->list[0]));
		pc->num--;
	}
	else
		printf("没有这个联系人，请重新查找!\n");
}


//修改联系人
void revise_Contact(Contact* pc)
{
	assert(pc);

	int k = 0;
	char name[NAME_MAX];
	printf("请输入要修改的联系人姓名:>");
	scanf("%s", name);

	//查找
	int ret = Fide_name(pc, name);

	//修改
	if (ret >= 0 && ret < pc->num)
	{
		printf("请输入姓名:>");
		scanf("%s", pc->list[ret].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->list[ret].age));
		printf("请输入性别:>");
		scanf("%s", pc->list[ret].sex);
		printf("请输入住址:>");
		scanf("%s", pc->list[ret].address);
		printf("请输入电话号码:>");
		scanf("%s", pc->list[ret].number);
	}
	else
		printf("没有这个联系人，请重新输入!\n");

}

//查找联系人
void Lookup_Contact(Contact* pc)
{
	assert(pc);

	char name[NAME_MAX];
	printf("请输入要查找的联系人姓名:>");
	scanf("%s", name);
	
	//查找
	int ret = Fide_name(pc, name);

	//显示
	if (ret >= 0 && ret < pc->num)
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t", "姓名", "年龄", "性别", "住址", "电话");
		printf("\n");
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-11s\t", pc->list[ret].name,
			pc->list[ret].age,
			pc->list[ret].sex,
			pc->list[ret].address,
			pc->list[ret].number);
		printf("\n");
	}
	else
		printf("没有这个联系人，请重新输入!\n");
}

//显示联系人
void show_Contac(Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","姓名","年龄","性别","住址","电话");

	for (i = 0; i < pc->num; i++)
	{
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\n", pc->list[i].name,
			pc->list[i].age,
			pc->list[i].sex,
			pc->list[i].address,
			pc->list[i].number);
	}
}


//排序
void sort_Contac(Contact* pc)
{
	assert(pc);

	int i = 0;
	for (i = 0; i < pc->num - 1; i++)
	{
		if (memcmp(pc->list[i].name, pc->list[i + 1].name, NAME_MAX) == 1)
		{
			Message tmp = pc->list[i + 1];

			pc->list[i + 1] = pc->list[i];
			pc->list[i] = tmp;
		}
	}
	printf("姓名由小到大排序成功\n");
}
