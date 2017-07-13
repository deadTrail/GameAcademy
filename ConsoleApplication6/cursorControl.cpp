#include <Windows.h>

enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR};
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