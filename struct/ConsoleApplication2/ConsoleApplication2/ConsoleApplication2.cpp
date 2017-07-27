// ConsoleApplication2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#pragma warning (disable:4996)
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct tagUSER
{
	char name[21];
	int age;
	int id;

}USER;
typedef struct tagNODE
{
	USER user;
	NODE* next;
}NODE;

enum MENU
{
	EXIT = 0,
	ADD_USER,
	DELETE_USER,
	SHOW_USER
};

int showMenu();
void addUser(NODE*,int*);

NODE tail = { NULL,&tail };
NODE head = { NULL,&tail };

int main()
{
	int len = 0;
	int sel = 0;
	do
	{
		switch (sel = showMenu())
		{
		case ADD_USER:
			addUser(&head, &len);
		default:
			break;
		}
	} while (true);
    return 0;
}
int showMenu()
{
	int select = 0;
	printf("---------------------");
	printf("------1.ȸ�� �߰�-----");
	printf("---------------------");
	scanf("%d", &select);
	return select;
}
void addUser(NODE* node, int* length)
{
	USER* tmpUser = NULL;
	NODE * nodeCpy = node;
	NODE * tempNode = NULL;
	tmpUser = (USER*)malloc(sizeof(USER));
	tempNode = (NODE*)malloc(sizeof(NODE));
	int isID = 0;
	do {
		if (isID == 1)
		{
			printf("�̹� �����ϴ� ���̵� �Դϴ�. �ٽ� �Է��� �ּ���.\n");
		}
		printf("���ڷ� �� ���̵� �Է��� �ּ���\n");
		tmpUser->id = 0;
		scanf("%d", &(tmpUser->id));
		while (true) {
			if (nodeCpy->user->id == tmpUser->id)
			{
				isID = 1;
				break;
			}
			else
			{
				nodeCpy = nodeCpy->next;
			}
		}
	} while (isID);
	printf("�̸��� �Է��� �ּ���.\n");
	scanf("%s", tmpUser->name);
	printf("���̸� �Է��� �ּ���\n");
	scanf("%d", &(tmpUser->age));
	tempNode->user = tmpUser;
	tempNode->next = node->next;
	node->next = tempNode;
}
