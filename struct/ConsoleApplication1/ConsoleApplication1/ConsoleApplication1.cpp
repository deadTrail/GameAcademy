// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#pragma warning (disable:4996)
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
/*typedef struct tagPERSON
{
	char name[10];
	char age;
	float weight;
}PERSON;*/

/*typedef struct tagSTUDENT
{
	char name[10];
	int korean;
	int english;
	int math;
}STUDENT;
*/

/*typedef struct tagNAME
{
	char first[10];
	char last[10];
}NAME;

typedef struct tagSTUDENT
{
	int num;
	int cls;
	NAME* name;
}STUDENT;
*/
/*typedef struct tagVALUE
{
	char a;
	char b;
	int c;
}VALUE;
typedef struct tagVALUE2
{
	char a;
	int c;
	char b;
	
}VALUE2;*/

typedef struct tagUSER
{
	char name[30];
	char email[30];
	char password[30];	
}USER;
int main()
{
	/*PERSON person = { "������",25,105.5f };
	printf("�̸� : %s\n", person.name);
	printf("���� : %d\n", person.age);
	printf("������ : %.2f \n", person.weight);
	*/
	/*
	STUDENT student;
	printf("�л��� �̸��� �Է��ϼ���:\n");
	scanf_s("%s", student.name,10);
	printf("�л��� ���� ������ �Է� �ϼ���:\n");
	scanf_s("%d", &student.korean);
	printf("�л��� ���� ������ �Է� �ϼ���:\n");
	scanf_s("%d", &student.english);
	printf("�л��� ���� ������ �Է� �ϼ���\n");
	scanf_s("%d", &student.math);

	printf("�л��� �̸� : %s\n�л��� �������� : %d\n�л��� �������� : %d\n�л��� �������� : %d\n", student.name, student.korean, student.english, student.math);
	*/
	/*STUDENT me = { 3,10};
	NAME name = { "����","��" };
	me.name = &name;
	printf("��ȣ : %d, �� : %d, �̸� : %s, �� : %s\n", me.num, me.cls, (*me.name).first, me.name->last);
	*/

	/*VALUE val;
	VALUE2 val2;
	printf("����ü VALUE�� ũ�� %d\n", sizeof(val));
	printf("����ü VALUE2�� ũ�� %d\n", sizeof(val2));
    */
	USER usr;
	int isWrong = 0;
	char pass[30] = { 0, };
	do
	{
		printf("ȸ������ �̸��� �Է��ϼ���(�ѱ� 5���� ����, ���� 10���� ����)\n");
		memset(usr.name, '\0', sizeof(usr.name));
		scanf("%s", usr.name);
		
		if (strlen(usr.name) <= 1) {
			printf("�̸��� ���̰� �ʹ� ª���ϴ�. �ٽ� �Է��ϼ���\n");
			isWrong = 1;
		}
		else if (strlen(usr.name) > 10) {
			printf("�̸��� ���̰� �ʹ� ��ϴ�. �ٽ� �Է��ϼ���.\n");
			isWrong = 2;
		}
		else
		{
			isWrong = 0;
		}
		char key = getchar();
	} while (isWrong);
	do
	{
		printf("ȸ������ �̸����� �Է��ϼ���\n");
		memset(usr.email, '\0', sizeof(usr.email));
		scanf("%s", usr.email);
		
		if (strstr(usr.email,"@") == NULL || strstr(usr.email,".com")==NULL)
		{
			printf("�ùٸ��� ���� �̸��� �Դϴ�. �ٽ� �Է��� �ּ���.\n");
			isWrong = 1;
		}
		else if (strlen(usr.email) > 20)
		{
			printf("�̸����� �ʹ� ��ϴ�. �ٽ� �Է��� �ּ���.\n");
			isWrong = 2;
		}
		else if (strlen(usr.email) <= 1)
		{
			printf("�̸����� �ʹ� ª���ϴ�. �ٽ� �Է��ϼ��� \n");
			isWrong = 3;
		}
		else
		{
			isWrong = 0;
		}
		char key = getchar();
	} while (isWrong);
	do 
	{
		printf("ȸ������ ��й�ȣ�� �Է��� �ּ���(6���� �̻� 12���� ����)\n");
		memset(usr.password, '\0', sizeof(usr.password));
		scanf("%s", usr.password);
		if (strlen(usr.password) < 6)
		{
			printf("��й�ȣ�� �ʹ� ª���ϴ�. �ٽ� �Է��� �ּ���\n");
			isWrong = 1;
		}
		else if (strlen(usr.password) > 12)
		{
			printf("��й�ȣ�� �ʹ� ��ϴ�. �ٽ� �Է��� �ּ���.\n");
			isWrong = 2;
		}
		else
		{
			isWrong = 0;
		}
	} while (isWrong);
	do
	{
		printf("��й�ȣ�� �ٽ� �Է����ּ���.\n");
		memset(pass, '\0', sizeof(pass));
		scanf("%s", pass);
		if (strlen(usr.password) < 6)
		{
			printf("��й�ȣ�� �ʹ� ª���ϴ�. �ٽ� �Է��� �ּ���\n");
			isWrong = 1;
		}
		else if (strlen(usr.password) > 12)
		{
			printf("��й�ȣ�� �ʹ� ��ϴ�. �ٽ� �Է��� �ּ���.\n");
			isWrong = 2;
		}
		else if (strcmp(usr.password, pass) != 0)
		{
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�. �ٽ� �Է��� �ּ���. \n");
			isWrong = 3;
		}
		else
		{
			isWrong = 0;
		}
	} while (isWrong);
	if (isWrong == 0)
	{
		printf("�̸�: %s\n", usr.name);
		printf("�̸��� :%s\n", usr.email);
		printf("��й�ȣ : %s\n", usr.password);
		printf("ȸ������ �Ϸ�!\n");
	}
	return 0;
}

