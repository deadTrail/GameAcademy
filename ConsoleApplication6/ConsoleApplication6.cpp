// GameAcademyLecture_Array.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
					break;
				}
			}
		}
	}
}
