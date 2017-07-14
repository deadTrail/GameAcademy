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
#define MAP_HIGHT 10
#define MAP_WIDTH 10

enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };
enum MAP_TYPE{ROAD,WALL,GEM};
void goToXY(int, int);
void setCursorType(CURSOR_TYPE);
void Title();
void KeyProcessing();
void MapPrint();
void Clear();

int heroX = 0, heroY = 0;
int maze[10][10] = {
	{ 0,1,1,1,1,1,1,1,1,1 },
	{ 0,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,0,0,1 },
	{ 1,0,0,0,0,0,1,1,0,1 },
	{ 1,0,0,0,2,0,1,1,0,1 },
	{ 1,1,1,1,1,0,1,1,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 },
};


int main()
{
	setCursorType(NOCURSOR);
	Title();
	while (true)
	{
		KeyProcessing();
		MapPrint();
	}
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
	
		
		goToXY(x, y + 0); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
		goToXY(x+5, y + 5); printf("�غ��� ã�� ����!��");
		goToXY(x, y + 15); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
		goToXY(x + 5, y + 7); printf("  ��   :      Up");
		goToXY(x + 5, y + 8); printf("��   �� : Left | Right");
		goToXY(x + 5, y + 9); printf("  ��   :     Down");
		while (true)
		{
			cnt++;
			if (!_kbhit())
			{

				if (cnt % 2 == 0)
				{
					goToXY(x + 5, y + 13); printf("Press Any Key To Start");
				}
				else
				{
					goToXY(x + 5, y + 13); printf("                       ");
				}
				Sleep(400);
			}
			else
			{
				break;
			}
		}
		while (_kbhit())
		{
			_getch();
		}
		system("cls");
}

void Clear()
{
	int x = 7, y = 7;
	goToXY(x, y + 0); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
	goToXY(x, y + 1); printf("��                                    ��");
	goToXY(x, y + 2); printf("��                                    ��");
	goToXY(x, y + 3); printf("��                                    ��");
	goToXY(x, y + 4); printf("��                                    ��");
	goToXY(x, y + 5); printf("��                                    ��");
	goToXY(x, y + 6); printf("��                                    ��");
	goToXY(x, y + 7); printf("��           ��CLEAR!!!!��            ��");
	goToXY(x, y + 8); printf("��                                    ��");
	goToXY(x, y + 9); printf("��                                    ��");
	goToXY(x, y + 10); printf("��                                    ��");
	goToXY(x, y + 11); printf("��                                    ��");
	goToXY(x, y + 12); printf("��                                    ��");
	goToXY(x, y + 13); printf("��                                    ��");
	goToXY(x, y + 14); printf("��                                    ��");
	goToXY(x, y + 15); printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
	_getch();
	system("cls");
}
void KeyProcessing()
{
	int key = 0;
	if (_kbhit())
	{
		key = _getch();
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if (heroY - 1 > 0 && maze[heroY - 1][heroX]!=WALL)
				{
					if (maze[heroY - 1][heroX] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroY--;
					}
				}
				break;
			case DOWN:
				if (heroY + 1 < MAP_HIGHT && maze[heroY + 1][heroX] != WALL)
				{
					if (maze[heroY + 1][heroX] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroY++;
					}
				}
				break;
			case LEFT:
				if (heroX - 1 > 0 && maze[heroY][heroX - 1] != WALL)
				{
					if (maze[heroY][heroX-1] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroX--;
					}
				}
				break;
			case RIGHT:
				if (heroX + 1 < MAP_WIDTH && maze[heroY][heroX + 1] != WALL)
				{
					if (maze[heroY][heroX+1] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroX++;
					}
				}
				break;
			default:
				break;
			}
		}
		else
		{
			if (key == ESC)
			{
				exit(0);
			}
		}
	}
	while (_kbhit())
	{
		_getch();
	}
}
void MapPrint()
{
	int x = 10, y = 10;
	goToXY(x + MAP_WIDTH, y); printf(" STAGE 1");
	for (int i = 0; i < MAP_HIGHT; i++)
	{
		for (int j = 0; j < MAP_WIDTH; j++)
		{
			if (maze[i][j] == ROAD)
			{
				if (i == heroY && j == heroX)
				{
					goToXY(x + j, y + i); printf("@");
				}
				else 
				{
					goToXY(x + j, y + i); printf("��");
				}
			}
			else if (maze[i][j] == WALL)
			{
				goToXY(x + j, y + i); printf("��");
			}
			else if (maze[i][j] == GEM)
			{
				goToXY(x + j, y + i); printf("��");
			}
		}
	}
}