#include "mapDraw.h"
int heroX=0, heroY=0;
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
int sec, min, hour, day;
clock_t current, start, end;
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
	int x = 10, y = 10, cnt = 0;


	goToXY(x, y + 0); printf("★★★★★★★★★★★★★★★★★★★★");
	goToXY(x + 5, y + 5); printf("※보석 찾기 게임!※");
	goToXY(x, y + 15); printf("★★★★★★★★★★★★★★★★★★★★");
	goToXY(x + 5, y + 7); printf("  ↑   :      Up");
	goToXY(x + 5, y + 8); printf("←   → : Left | Right");
	goToXY(x + 5, y + 9); printf("  ↓   :     Down");
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
	start = clock();
}

void Clear()
{
	int x = 7, y = 7;
	goToXY(x, y + 0); printf("★★★★★★★★★★★★★★★★★★★★");
	goToXY(x, y + 1); printf("★                                    ★");
	goToXY(x, y + 2); printf("★                                    ★");
	goToXY(x, y + 3); printf("★                                    ★");
	goToXY(x, y + 4); printf("★                                    ★");
	goToXY(x, y + 5); printf("★                                    ★");
	goToXY(x, y + 6); printf("★                                    ★");
	goToXY(x, y + 7); printf("★           ※CLEAR!!!!※            ★");
	goToXY(x, y + 8); printf("★                                    ★");
	goToXY(x, y + 9); printf("★                                    ★");
	goToXY(x, y + 10); printf("★                                    ★");
	goToXY(x, y + 11); printf("★                                    ★");
	goToXY(x, y + 12); printf("★                                    ★");
	goToXY(x, y + 13); printf("★                                    ★");
	goToXY(x, y + 14); printf("★                                    ★");
	goToXY(x, y + 15); printf("★★★★★★★★★★★★★★★★★★★★");
	_getch();
	system("cls");
	start = clock();
}
void MapPrint()
{
	int x = 10, y = 10;
	int msecPerMinute = CLOCKS_PER_SEC * 60;
	int msecPerHour = msecPerMinute * 60;
	int msecPerDay = msecPerHour * 24;
	end = clock();
	current = end - start;
	day = current / msecPerDay;
	current -= msecPerDay*day;
	hour = current / msecPerHour;
	current -= msecPerHour*hour;
	min = current / msecPerMinute;
	current -= msecPerMinute*min;
	sec = current / CLOCKS_PER_SEC;
	goToXY(x + MAP_WIDTH, y + 5); printf("%02d 일 %02d 시간 %02d 분 %02d 초", day, hour, min, sec);
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
					goToXY(x + j, y + i); printf("□");
				}
			}
			else if (maze[i][j] == WALL)
			{
				goToXY(x + j, y + i); printf("■");
			}
			else if (maze[i][j] == GEM)
			{
				goToXY(x + j, y + i); printf("☆");
			}
		}
	}
}