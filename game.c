#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//�����׵����̳�ʼ��
void initialize_board(char board[Rows][Cols], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//��ӡ����������
void print_board(char board[Rows][Cols], int row, int col)
{
	printf("--------ɨ��-------\n");
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	int i = 0;
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------ɨ��-------\n");
}


//������
void layout_tunter(char hide[Rows][Cols], int row, int col,int num)
{
	int i = 0;
	int count = num;
	while (count > 0)
	{
		int s1 = rand() % row;
		int s2 = rand() % col;
		if (s1 != 0 && s2 != 0 && hide[s1][s2] != '1')
		{
			hide[s1][s2] = '1';
			count--;
		}
	}

}


//������Χ�׵ĸ���
int find(char hide[Rows][Cols], int x, int y)
{
	return (hide[x - 1][y] + hide[x - 1][y - 1] + hide[x][y - 1] +
		hide[x + 1][y - 1] + hide[x + 1][y] + hide[x + 1][y + 1] +
		hide[x][y + 1] + hide[x - 1][y + 1] - 8 * '0');
}


//����
int mine(char hide[Rows][Cols], char show[Rows][Cols], int rows, int cols,int num)
{

	int x = 0;
	int y = 0;
	int count = (rows-2) * (cols-2) - num;
	while (1)
	{
		printf("��������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);

		if (x > 0 && x < rows - 1 && y>0 && y < cols - 1)
		{
			//���Ų���Ͳ����Ų���
			if (show[x][y] != '.')
			{
				printf("��λ�ñ��Ų���ˣ��������Ų�!\n");
				continue;
			}

			if (hide[x][y] == '1')
			{
				printf("\n");
				printf("���ź����㱻ը���ˣ�\n");
				printf("------���׷ֲ�ͼ-----\n");
				printf("\n");
				print_board(hide, Row, Col);
				break;
			}
			else if (hide[x][y] != '1')
			{
				int n = find(hide, x, y);
				show[x][y] = n + '0';
				print_board(show, Row, Col);
				count--;
			}
		}
		else
			printf("�����������������\n");
		//�ѳ���������Ķ��Ų����Ӯ��
		if (count == 0)
		{
			printf("\n");
			printf("��ϲ�㣬���ʤ��������\n");
			printf("\n");
			printf("------���׷ֲ�ͼ-----\n");
			print_board(hide, Row, Col);
			printf("\n");
			count--;
			break;
		}
	}
}