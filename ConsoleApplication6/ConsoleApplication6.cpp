// GameAcademyLecture_Array.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32
#define ESC 27

enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };
void goToXY(int, int);
void setCursorType(CURSOR_TYPE);
void Title();


int main()
{
	setCursorType(NOCURSOR);
	Title();
	/*enum JOBS {
		WARRIOR=1,
		MAGE,
		HUNTER,
		THIEF
	};
	JOBS myjob = WARRIOR;
	printf("*������ ������ �ּ���\n");
	printf("\t1.����\n");
	printf("\t2.������\n");
	printf("\t3.��ɲ�\n");
	printf("\t4.����\n");
	printf("*******************\n");
	scanf_s("%d", &myjob);
	switch (myjob)
	{
	case WARRIOR:
		printf("���縦 �����ϼ̽��ϴ�.\n");
		break;
	case MAGE:
		printf("�����縦 �����ϼ̽��ϴ�.\n");
		break;
	case HUNTER:
		printf("��ɲ��� �����ϼ̽��ϴ�\n");
		break;
	case THIEF:
		printf("������ �����ϼ̽��ϴ�\n");
		break;
	}*/

	/*int key = 0;
	while (true)
	{
		if (_kbhit())
		{
			key = _getch();
			if (key == 224)
			{
				key = _getch();
				switch (key)
				{
				case UP:
					printf("UP ����\n");
					break;
				case LEFT:
					printf("LEFT ����\n");
					break;
				case RIGHT:
					printf("RIGHT ����\n");
					break;
				case DOWN:
					printf("DOWN ����\n");
					break;
				default:
					break;
				}
			}
			else
			{
				switch (key)
				{
				case(SPACE):
					printf("SPACE ����\n");
					break;
				case(ESC):
					printf("ESC ����\n");
				default:
					printf("%d\n", key);
					break;
				}
			}
		}
	}*/
	return 0;
}

void goToXY(int x, int y)
{
	COORD pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void setCursorType(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO CurInfo;

	switch (c)
	{
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		break;
	case NORMALCURSOR:
		CurInfo.dwSize = 20;
		CurInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}
void Title()
{
	int x = 10, y = 10, cnt=0;
	while (true)
	{
		cnt++;
		goToXY(x, y + 0); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
		goToXY(x+5, y + 5); printf("�غ��� ã�� ����!��");
		goToXY(x, y + 15); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
		goToXY(x + 5, y + 7); printf("  ��   :      Up");
		goToXY(x + 5, y + 8); printf("��   �� : Left | Right");
		goToXY(x + 5, y + 9); printf("  ��   :     Down");
		if (!_kbhit())
		{

			if (cnt % 2 == 0)
			{
				goToXY(x + 5, y + 13); printf("Press Any Key To Start");
			}
			else
			{
				goToXY(x + 5, y + 13); printf("");
			}
		}
		else
		{
			break;
		}
		
	}
}