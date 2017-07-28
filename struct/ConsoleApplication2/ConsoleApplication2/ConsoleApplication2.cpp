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
	struct tagNODE* next;
}NODE;

enum MENU
{
	EXIT = 0,
	ADD_USER,
	DELETE_USER,
	SHOW_USER
};

void initNode();
int showMenu();
void addUser();
void deleteUser();
void showUser();
void releaseAll();

NODE *tail = NULL;
NODE *head = NULL;

int main()
{
	int sel = 0;
	initNode();
	do
	{
		switch (sel = showMenu())
		{
		case ADD_USER:
			addUser();
			break;
		case DELETE_USER:
			deleteUser();
			break;
		case SHOW_USER:
			showUser();
			break;
		case EXIT:
			exit(0);
			break;
		default:
			printf("you input wrong key! please try another key\n");
			break;
		}
	} while (true);
	releaseAll();
	return 0;
}
void initNode()
{
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));
	head->next = tail;
	tail->next = tail;
}
int showMenu()
{
	int select = 0;
	printf("-------------------------\n");
	printf("--------1.Add User-------\n");
	printf("------2.Delete User------\n");
	printf("-------3.Show User-------\n");
	printf("----------0.Exit---------\n");
	printf("-------------------------\n");
	scanf("%d", &select);
	return select;
}
void addUser()
{
	USER tmpUser = { { 0, },0,0 };
	NODE * iterNode = head;
	NODE * tempNode = NULL;
	tempNode = (NODE*)malloc(sizeof(NODE));
	int isID = 0;
	do {
		if (isID == 1)
		{
			printf("ID is already taken. please enter ID again.\n");
		}
		printf("Please type your ID composed of numbers.\n");
		tmpUser.id = 0;
		scanf("%d", &(tmpUser.id));
		while (iterNode != tail) {
			if (iterNode->user.id == tmpUser.id)
			{
				isID = 1;
				break;
			}
			else
			{
				iterNode = iterNode->next;
			}
		}
	} while (isID);
	printf("Please type in your Name.\n");
	scanf("%s", tmpUser.name);
	printf("Please type in your age.\n");
	scanf("%d", &(tmpUser.age));
	tempNode->user = tmpUser;
	tempNode->next = head->next;
	head->next = tempNode;
}
void deleteUser()
{
	int tmpID = 0;
	do
	{
		NODE* prevNode = head;
		NODE* iterNode = prevNode->next;
		printf("Please type in a ID you want to delete.\n");
		scanf("%d", &tmpID);
		while (iterNode != tail && iterNode->user.id != tmpID)
		{
			prevNode = prevNode->next;
			iterNode = iterNode->next;
		}
		if (iterNode != tail)
		{
			prevNode->next = iterNode->next;
			free(iterNode);
			printf("Delete Complete.\n");
			break;
		}
		else
		{
			printf("There is no ID to match with. Please try again.\n");
		}
	} while (true);

}
void showUser()
{
	NODE * iterNode = head->next;

	printf("|%5s||%5s||%5s|\n", "ID", "Age", "Name");

	while (iterNode != tail)
	{
		printf("|%5d||%5d||%5s|\n", iterNode->user.id, iterNode->user.age, iterNode->user.name);
		iterNode = iterNode->next;
	}
}
void releaseAll()
{
	NODE * prevNode = head;
	NODE * iterNode = NULL;
	while (iterNode != tail)
	{
		iterNode = prevNode->next;
		prevNode->next = iterNode->next;
		free(iterNode);
	}
	free(tail);
	free(head);
}
