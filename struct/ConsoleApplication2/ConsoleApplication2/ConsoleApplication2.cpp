// ConsoleApplication2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	printf("------1.회원 추가-----");
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
			printf("이미 존재하는 아이디 입니다. 다시 입력해 주세요.\n");
		}
		printf("숫자로 된 아이디를 입력해 주세요\n");
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
	printf("이름을 입력해 주세요.\n");
	scanf("%s", tmpUser->name);
	printf("나이를 입력해 주세요\n");
	scanf("%d", &(tmpUser->age));
	tempNode->user = tmpUser;
	tempNode->next = node->next;
	node->next = tempNode;
}
