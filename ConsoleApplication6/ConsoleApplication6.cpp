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
	enum JOBS {
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
