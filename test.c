#define _CRT_SECURE_NO_WARNINGS 1

#include "Contacts.h"

void menu()
{
	printf("***************   菜单   *****************\n");
	printf("*****  1.add_Contact  2.del_Contact  *****\n");
	printf("*****  3.revise       4.lookup       *****\n");
	printf("*****  5.show         6.sort         *****\n");
	printf("*****  0.exit                        *****\n");
	printf("******************************************\n");
}

//主函数
int main()
{
	int input = 0;
	Contact con;
	//通讯录初始化
	Init_Contact(&con);

	do
	{
		//开始菜单
		menu();
		printf("请选择功能:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Destroy_Contact(&con);
			printf("您已退出\n");
			break;
		case 1:
			add_Contact(&con);
			break;
		case 2:
			del_Contact(&con);
			break;
		case 3:
			revise_Contact(&con);
			break;
		case 4:
			Lookup_Contact(&con);
			break;
		case 5:
			show_Contac(&con);
			break;
		case 6:
			sort_Contac(&con);
			break;
		}
	} while (input);

	return 0;
}