#define _CRT_SECURE_NO_WARNINGS 1

#include "Contacts.h"

//ͨѶ¼��ʼ��
void Init_Contact(Contact* pc)
{
	pc->num = 0;
	memset(pc->list, 0, sizeof(pc->list));
}


//���Һ���
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

//������ϵ��
void add_Contact(Contact* pc)
{
	if (pc->num == MAX)
	{
		printf("��ϵ���б�����������������!\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->list[pc->num].name);
		printf("����������:>");
		scanf("%d", &(pc->list[pc->num].age));
		printf("�������Ա�:>");
		scanf("%s", pc->list[pc->num].sex);
		printf("������סַ:>");
		scanf("%s", pc->list[pc->num].address);
		printf("������绰����:>");
		scanf("%s", pc->list[pc->num].number);
		pc->num = pc->num + 1;
	}
}

//ɾ����ϵ��
void del_Contact(Contact* pc)
{
	assert(pc);

	if (pc->num == 0)
	{
		printf("������ϵ��!\n");
	}
	int k = 0;
	char name[NAME_MAX];
	printf("������Ҫɾ������ϵ������:>");
	scanf("%s", name);
	//����
	int ret = Fide_name(pc, name);

	//ɾ��
	if (ret >= 0 && ret < pc->num)
	{
		memmove(pc->list + ret, pc->list + 1 + ret, (pc->num - ret) * sizeof(pc->list[0]));
		pc->num--;
	}
	else
		printf("û�������ϵ�ˣ������²���!\n");
}


//�޸���ϵ��
void revise_Contact(Contact* pc)
{
	assert(pc);

	int k = 0;
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);

	//����
	int ret = Fide_name(pc, name);

	//�޸�
	if (ret >= 0 && ret < pc->num)
	{
		printf("����������:>");
		scanf("%s", pc->list[ret].name);
		printf("����������:>");
		scanf("%d", &(pc->list[ret].age));
		printf("�������Ա�:>");
		scanf("%s", pc->list[ret].sex);
		printf("������סַ:>");
		scanf("%s", pc->list[ret].address);
		printf("������绰����:>");
		scanf("%s", pc->list[ret].number);
	}
	else
		printf("û�������ϵ�ˣ�����������!\n");

}

//������ϵ��
void Lookup_Contact(Contact* pc)
{
	assert(pc);

	char name[NAME_MAX];
	printf("������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);
	
	//����
	int ret = Fide_name(pc, name);

	//��ʾ
	if (ret >= 0 && ret < pc->num)
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t", "����", "����", "�Ա�", "סַ", "�绰");
		printf("\n");
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-11s\t", pc->list[ret].name,
			pc->list[ret].age,
			pc->list[ret].sex,
			pc->list[ret].address,
			pc->list[ret].number);
		printf("\n");
	}
	else
		printf("û�������ϵ�ˣ�����������!\n");
}

//��ʾ��ϵ��
void show_Contac(Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","����","����","�Ա�","סַ","�绰");

	for (i = 0; i < pc->num; i++)
	{
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\n", pc->list[i].name,
			pc->list[i].age,
			pc->list[i].sex,
			pc->list[i].address,
			pc->list[i].number);
	}
}


//����
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
	printf("������С��������ɹ�\n");
}
