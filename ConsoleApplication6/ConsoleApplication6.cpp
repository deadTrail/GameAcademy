// GameAcademyLecture_Array.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROCK 0
#define SCISSORS 1
#define PAPER 2
#define WIN 0
#define DRAW 1
#define LOSE 2 
int main()
{
	int player = 0;
	int com = 0;
	int count = 0;
	int result[3] = { 0, };
	char rps[3][5] = { "����","����","��" };
	while (true)
	{
		printf("*********************************\n");
		printf("**********�߾��� »�˻�***********\n");
		printf("********1.���� 2.���� 3.��********\n");
		printf("***********0.���� ����************\n");
		printf("*********************************\n");
		scanf_s("%d", &player);
		if (player > 0 && player < 4)
		{
			count++;
			srand((unsigned int)time(NULL));
			com = rand() % 3;
			player -= 1;
			printf("�÷��̾�: %s\n", rps[player]);
			printf("��ǻ��: %s\n", rps[com]);
			if (player == com)
			{
				printf("�����ϴ�!! �ٽ��ѹ�?\n");
				result[DRAW]+=1;
			}
			else if ((player == ROCK && com == PAPER) ||
				(player == PAPER && com == SCISSORS) ||
				(player == SCISSORS && com == ROCK))
			{
				printf("�����ϴ�....�ƽ��׿�...\n");
				result[LOSE] += 1;
			}
			else
			{
				printf("�̰���ϴ�!! �����մϴ�!! \n");
				result[WIN] += 1;
			}
			printf("���� %d�� %d�� %d�� %d�� �Դϴ�.\n", count, result[WIN], result[DRAW], result[LOSE]);
		}
		else
		{
			if (player != 0)
			{
				printf("�߸� �Է� �ϼ̽��ϴ�.\n");
			}
			else 
			{
				printf("���� ��!\n");
				exit(0);
			}
		}
		system("pause");
		system("cls");
	}
	
	return 0;
}
