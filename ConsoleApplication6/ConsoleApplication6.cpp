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
	enum JOBS {
		WARRIOR=1,
		MAGE,
		HUNTER,
		THIEF
	};
	JOBS myjob = WARRIOR;
	printf("*직업을 선택해 주세요\n");
	printf("\t1.전사\n");
	printf("\t2.마법사\n");
	printf("\t3.사냥꾼\n");
	printf("\t4.도적\n");
	printf("*******************\n");
	scanf_s("%d", &myjob);
	switch (myjob)
	{
	case WARRIOR:
		printf("전사를 선택하셨습니다.\n");
		break;
	case MAGE:
		printf("마법사를 선택하셨습니다.\n");
		break;
	case HUNTER:
		printf("사냥꾼을 선택하셨습니다\n");
		break;
	case THIEF:
		printf("도적을 선택하셨습니다\n");
		break;
	}

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
					printf("%d\n", key);
					break;
				}
			}
		}
	}*/
	return 0;
}
