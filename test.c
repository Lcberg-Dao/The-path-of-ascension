#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("*****    ��ʼ��Ϸ-1    *****\n");
	printf("*****    ������Ϸ-0    *****\n");
	printf("****************************\n");
}

//��ʽ��ʼ��Ϸ
void game()
{
	char hide[Rows][Cols];
	char show[Rows][Cols];
	char set1 = '0';
	char set2 = '.';

	// �����׵����̳�ʼ��
	initialize_board(hide, Rows, Cols, set1);
	
	//�������̳�ʼ��
	initialize_board(show, Rows, Cols, set2);

	//�������̴�ӡ
	print_board(show, Row, Col);

	//������
	layout_tunter(hide, Row, Col, number);

	//�Ų���
	mine(hide, show, Rows, Cols, number);
}

int main()
{
	int input = 0;
	do {
		//��ϷĿ¼
		menu();
		srand((unsigned int)time(NULL));
		printf("�Ƿ�ʼ��Ϸ(1/0):");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("������Ч������������\n");
			break;
		}
	} while (input);


	return 0;
}