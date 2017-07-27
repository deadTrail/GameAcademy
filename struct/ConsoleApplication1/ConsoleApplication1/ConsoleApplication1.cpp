// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	/*PERSON person = { "백종열",25,105.5f };
	printf("이름 : %s\n", person.name);
	printf("나이 : %d\n", person.age);
	printf("몸무게 : %.2f \n", person.weight);
	*/
	/*
	STUDENT student;
	printf("학생의 이름을 입력하세요:\n");
	scanf_s("%s", student.name,10);
	printf("학생의 국어 점수를 입력 하세요:\n");
	scanf_s("%d", &student.korean);
	printf("학생의 영어 점수를 입력 하세요:\n");
	scanf_s("%d", &student.english);
	printf("학생의 수학 점수를 입력 하세요\n");
	scanf_s("%d", &student.math);

	printf("학생의 이름 : %s\n학생의 국어점수 : %d\n학생의 영어점수 : %d\n학생의 수학점수 : %d\n", student.name, student.korean, student.english, student.math);
	*/
	/*STUDENT me = { 3,10};
	NAME name = { "종열","백" };
	me.name = &name;
	printf("번호 : %d, 반 : %d, 이름 : %s, 성 : %s\n", me.num, me.cls, (*me.name).first, me.name->last);
	*/

	/*VALUE val;
	VALUE2 val2;
	printf("구조체 VALUE의 크기 %d\n", sizeof(val));
	printf("구조체 VALUE2의 크기 %d\n", sizeof(val2));
    */
	USER usr;
	int isWrong = 0;
	char pass[30] = { 0, };
	do
	{
		printf("회원님의 이름을 입력하세요(한글 5글자 이하, 영문 10글자 이하)\n");
		memset(usr.name, '\0', sizeof(usr.name));
		scanf("%s", usr.name);
		
		if (strlen(usr.name) <= 1) {
			printf("이름의 길이가 너무 짧습니다. 다시 입력하세요\n");
			isWrong = 1;
		}
		else if (strlen(usr.name) > 10) {
			printf("이름의 길이가 너무 깁니다. 다시 입력하세요.\n");
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
		printf("회원님의 이메일을 입력하세요\n");
		memset(usr.email, '\0', sizeof(usr.email));
		scanf("%s", usr.email);
		
		if (strstr(usr.email,"@") == NULL || strstr(usr.email,".com")==NULL)
		{
			printf("올바르지 않은 이메일 입니다. 다시 입력해 주세요.\n");
			isWrong = 1;
		}
		else if (strlen(usr.email) > 20)
		{
			printf("이메일이 너무 깁니다. 다시 입력해 주세요.\n");
			isWrong = 2;
		}
		else if (strlen(usr.email) <= 1)
		{
			printf("이메일이 너무 짧습니다. 다시 입력하세요 \n");
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
		printf("회원님의 비밀번호를 입력해 주세요(6글자 이상 12글자 이하)\n");
		memset(usr.password, '\0', sizeof(usr.password));
		scanf("%s", usr.password);
		if (strlen(usr.password) < 6)
		{
			printf("비밀번호가 너무 짧습니다. 다시 입력해 주세요\n");
			isWrong = 1;
		}
		else if (strlen(usr.password) > 12)
		{
			printf("비밀번호가 너무 깁니다. 다시 입력해 주세요.\n");
			isWrong = 2;
		}
		else
		{
			isWrong = 0;
		}
	} while (isWrong);
	do
	{
		printf("비밀번호를 다시 입력해주세요.\n");
		memset(pass, '\0', sizeof(pass));
		scanf("%s", pass);
		if (strlen(usr.password) < 6)
		{
			printf("비밀번호가 너무 짧습니다. 다시 입력해 주세요\n");
			isWrong = 1;
		}
		else if (strlen(usr.password) > 12)
		{
			printf("비밀번호가 너무 깁니다. 다시 입력해 주세요.\n");
			isWrong = 2;
		}
		else if (strcmp(usr.password, pass) != 0)
		{
			printf("비밀번호가 일치하지 않습니다. 다시 입력해 주세요. \n");
			isWrong = 3;
		}
		else
		{
			isWrong = 0;
		}
	} while (isWrong);
	if (isWrong == 0)
	{
		printf("이름: %s\n", usr.name);
		printf("이메일 :%s\n", usr.email);
		printf("비밀번호 : %s\n", usr.password);
		printf("회원가입 완료!\n");
	}
	return 0;
}

