// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

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
	char name[11];
	char email[25];
	char password[25];	
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
	char tmpPass[25];
	int isWrong = 0;
	do
	{

	}
	return 0;
}

