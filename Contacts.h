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

//��ϵ����Ϣ
typedef struct Message
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char address[Address_MAX];
	char number[NUMBER_MAX];
}Message;

//��ϵ������
typedef struct Contact
{
	Message list[MAX];
	int num;
}Contact;

//ͨѶ¼��ʼ��
void Init_Contact(Contact* pc);

//������ϵ����Ϣ
void add_Contact(Contact* pc);

//ɾ����ϵ��
void del_Contact(Contact* pc);

//�޸���ϵ��
void revise_Contact(Contact* pc);

//���Һ���
void Lookup_Contact(Contact* pc);

//��ʾ��ϵ��
void show_Contac(Contact* pc);

//����
void sort_Contac(Contact* pc);







