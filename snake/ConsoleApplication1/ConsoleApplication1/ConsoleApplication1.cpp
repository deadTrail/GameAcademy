// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PAUSE 112
#define ESC 27
#define BASE_X 5
#define BASE_Y 5
#define MAP_WIDTH 25
#define MAP_HEIGHT 30
#define BASE_SPEED 400

int snake_x[600];
int snake_y[600];
int speed;
int dir;
int length;
int score;
int key;

enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };
void Init();
void DrawMap();
void DrawChar(int, int, char*);
void setCursorType(CURSOR_TYPE);
void Title();
void MakeFood();
void DrawSnake(int);
void KeyProcess();

int main()
{
	setCursorType(NOCURSOR);
	Title();
	while (true)
	{
		KeyProcess();
		DrawSnake(dir);
	}

    return 0; 
}
void DrawChar(int x, int y, char*c)
{
	COORD pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%s", c);
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
void DrawMap()
{
	for (int i = 0; i < MAP_WIDTH+1; i++)
	{
		DrawChar(BASE_X + i, BASE_Y, "■");
	}
	for (int j = 1; j < MAP_HEIGHT - 1; j++)
	{
		DrawChar(BASE_X, BASE_Y + j, "■");
		DrawChar(BASE_X + MAP_WIDTH, BASE_Y + j, "■");
	}
	for (int i = 0; i < MAP_WIDTH+1; i++)
	{
		DrawChar(BASE_X + i, BASE_Y+MAP_HEIGHT-1, "■");
	}
}
void MakeFood() 
{
	int foodX = 0;
	int foodY = 0;
	while (true)
	{
		srand((unsigned int)time(NULL));
		foodX = rand() % (MAP_WIDTH - 2) + 1;
		foodY = rand() % (MAP_HEIGHT - 2) + 1;
		for (int i = 0; i < length; i++)
		{
			if (snake_x[i] == foodX && snake_y[i] == foodY)
			{
				break;
			}
		}
	}
}
void Init() 
{
	system("cls");
	DrawMap();
	while (_kbhit())
	{
		_getch();
	}
	dir = LEFT;
	score = 0;
	length = 5;
	speed = BASE_SPEED;

	for (int i = 0; i < length; i++)
	{
		snake_x[i] = MAP_WIDTH / 2 + i;
		snake_y[i] = MAP_HEIGHT / 2;
		if (i == 0)
		{
			DrawChar(BASE_X + snake_x[i], BASE_Y + snake_y[i],"◆" );
		}
		else 
		{ 
			DrawChar(BASE_X + snake_x[i], BASE_Y + snake_y[i], "○");
		}
	}
	//MakeFood();
}
void Title()
{
	int cnt = 0;
	DrawMap();
	DrawChar(BASE_X + 7, BASE_Y + 5, "************************");
	DrawChar(BASE_X + 7, BASE_Y + 8, "       SNAKE GAME      ");
	DrawChar(BASE_X + 7, BASE_Y + 11, "************************");
	DrawChar(BASE_X + 7, BASE_Y + 13, "    △ ▽ ◁ ▷ : move    ");
	DrawChar(BASE_X + 7, BASE_Y + 14, "          P : Pause       ");
	DrawChar(BASE_X + 7, BASE_Y + 15, "         ESC : Exit       ");
	
	while (true)
	{	
		cnt++;
		if (!_kbhit())
		{
			if (cnt % 2 == 0)
			{
				DrawChar(BASE_X + 7, BASE_Y + 17, "    Press Any Key To Start    ");
			}
			else
			{
				DrawChar(BASE_X + 7, BASE_Y + 17, "                               ");
			}
			Sleep(speed);
		}
		else
		{
			break;
		}
	}
	system("cls");
	Init();
}
void DrawSnake(int dir) 
{
	DrawChar(BASE_X + snake_x[length - 1], BASE_Y + snake_y[length - 1], " ");
	for (int i = length - 1; i > 0; i--)
	{
		snake_x[i] = snake_x[i - 1];
		snake_y[i] = snake_y[i - 1];
	}
	DrawChar(BASE_X + snake_x[0], BASE_Y + snake_y[0],"○" );
	if(dir==LEFT)
	{
		--snake_x[0];
	}
	if (dir == RIGHT)
	{
		++snake_x[0];
	}
	if (dir == UP)
	{
		--snake_y[0];
	}
	if (dir == DOWN)
	{
		++snake_y[0];
	}
	DrawChar(BASE_X + snake_x[0], BASE_Y + snake_y[0], "◆");
}
void KeyProcess()
{
	if (_kbhit())
	{
		do {
			key = _getch();
		} while (key == 224);
	}
	Sleep(speed);
	switch (key) {
	case LEFT:
	case RIGHT:
	case UP:
	case DOWN:
		if ((dir == LEFT && key != RIGHT) || (dir == RIGHT && key != LEFT) || (dir == UP && key != DOWN) || (dir == DOWN && key != UP))
		{
			dir = key;
		}
		break;
	case ESC:
		exit(0);
	}
	
}