#include "mapDraw.h"

 int snake_x[600];
 int snake_y[600];
 int speed;
 int dir;
 int length;
 int score;
 int key;
 int foodX;
 int foodY;

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
	for (int i = 0; i < MAP_WIDTH + 1; i++)
	{
		DrawChar(BASE_X + i, BASE_Y, "¡á");
	}
	for (int j = 1; j < MAP_HEIGHT - 1; j++)
	{
		DrawChar(BASE_X, BASE_Y + j, "¡á");
		DrawChar(BASE_X + MAP_WIDTH, BASE_Y + j, "¡á");
	}
	for (int i = 0; i < MAP_WIDTH + 1; i++)
	{
		DrawChar(BASE_X + i, BASE_Y + MAP_HEIGHT - 1, "¡á");
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
	speed = BASE_SPEED + 250;

	for (int i = 0; i < length; i++)
	{
		snake_x[i] = MAP_WIDTH / 2 + i;
		snake_y[i] = MAP_HEIGHT / 2;
		if (i == 0)
		{
			DrawChar(BASE_X + snake_x[i], BASE_Y + snake_y[i], "¡ß");
		}
		else
		{
			DrawChar(BASE_X + snake_x[i], BASE_Y + snake_y[i], "¡Û");
		}
	}
	MakeFood();
}
void GameOver()
{
	system("cls");
	DrawMap();
	DrawChar(BASE_X + 7, BASE_Y + 5, "************************");
	DrawChar(BASE_X + 7, BASE_Y + 8, "       GAME OVER      ");
	DrawChar(BASE_X + 7, BASE_Y + 11, "************************");
	DrawChar(BASE_X + 7, BASE_Y + 13, " Your Score  : ");
	printf("%d", score);
	while (_kbhit())
	{
		_getch();
	}
	key = _getch();
	Title();
}
void Title()
{
	int cnt = 0;
	while (_kbhit())
	{
		_getch();
	}
	DrawMap();
	DrawChar(BASE_X + 7, BASE_Y + 5, "************************");
	DrawChar(BASE_X + 7, BASE_Y + 8, "       SNAKE GAME      ");
	DrawChar(BASE_X + 7, BASE_Y + 11, "************************");
	DrawChar(BASE_X + 7, BASE_Y + 13, "    ¡â ¡ä ¢· ¢¹ : move    ");
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
			Sleep(400);
		}
		else
		{
			break;
		}
	}
	system("cls");
	Init();
}
void MakeFood()
{
	bool isSameAsSnake = false;
	do
	{
		srand((unsigned int)time(NULL));
		foodX = rand() % (MAP_WIDTH - 2) + 1;
		foodY = rand() % (MAP_HEIGHT - 2) + 1;
		for (int i = 0; i < length; i++)
		{
			if (snake_x[i] == foodX && snake_y[i] == foodY)
			{
				isSameAsSnake = true;
				break;
			}
			else
			{
				isSameAsSnake = false;
			}
		}
	} while (isSameAsSnake);
	DrawChar(BASE_X + foodX, BASE_Y + foodY, "¢¾");
}