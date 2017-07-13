// GameAcademyLecture_Array.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32
#define ESC 27
int main()
{
	int key = 0;
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
					printf("UP 눌림\n");
					break;
				case LEFT:
					printf("LEFT 눌림\n");
					break;
				case RIGHT:
					printf("RIGHT 눌림\n");
					break;
				case DOWN:
					printf("DOWN 눌림\n");
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
					printf("SPACE 눌림\n");
					break;
				case(ESC):
					printf("ESC 눌림\n");
				default:
					break;
				}
			}
		}
	}
}
