#define _CRT_SECURE_NO_WARNINGS 1

#include "Contacts.h"

void menu()
{
	printf("***************   �˵�   *****************\n");
	printf("*****  1.add_Contact  2.del_Contact  *****\n");
	printf("*****  3.revise       4.lookup       *****\n");
	printf("*****  5.show         6.sort         *****\n");
	printf("*****  0.exit                        *****\n");
	printf("******************************************\n");
}

//������
int main()
{
	int input = 0;
	Contact con;
	//ͨѶ¼��ʼ��
	Init_Contact(&con);

	do
	{
		//��ʼ�˵�
		menu();
		printf("��ѡ����:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Destroy_Contact(&con);
			printf("�����˳�\n");
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