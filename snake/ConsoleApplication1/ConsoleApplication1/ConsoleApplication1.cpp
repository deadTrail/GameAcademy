// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "gameProcessor.h"
#include "mapDraw.h"

int main()
{
	setCursorType(NOCURSOR);
	Title();
	while (true)
	{
		KeyProcess();
		GameProcess();
		DrawSnake(dir);
	}

    return 0; 
}


