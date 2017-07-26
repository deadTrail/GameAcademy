// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	char tmpPass[25];
	int isWrong = 0;
	do
	{

	}
	return 0;
}

