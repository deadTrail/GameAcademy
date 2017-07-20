// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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


