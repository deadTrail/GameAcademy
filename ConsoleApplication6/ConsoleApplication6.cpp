// GameAcademyLecture_Array.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	char rps[3][5] = { "바위","가위","보" };
	while (true)
	{
		printf("*********************************\n");
		printf("**********추억의 쨩켄뽀***********\n");
		printf("********1.바위 2.가위 3.보********\n");
		printf("***********0.게임 종료************\n");
		printf("*********************************\n");
		scanf_s("%d", &player);
		if (player > 0 && player < 4)
		{
			count++;
			srand((unsigned int)time(NULL));
			com = rand() % 3;
			player -= 1;
			printf("플레이어: %s\n", rps[player]);
			printf("컴퓨터: %s\n", rps[com]);
			if (player == com)
			{
				printf("비겼습니다!! 다시한번?\n");
				result[DRAW]+=1;
			}
			else if ((player == ROCK && com == PAPER) ||
				(player == PAPER && com == SCISSORS) ||
				(player == SCISSORS && com == ROCK))
			{
				printf("졌습니다....아쉽네요...\n");
				result[LOSE] += 1;
			}
			else
			{
				printf("이겼습니다!! 축하합니다!! \n");
				result[WIN] += 1;
			}
			printf("현재 %d전 %d승 %d무 %d패 입니다.\n", count, result[WIN], result[DRAW], result[LOSE]);
		}
		else
		{
			if (player != 0)
			{
				printf("잘못 입력 하셨습니다.\n");
			}
			else 
			{
				printf("게임 끝!\n");
				exit(0);
			}
		}
		system("pause");
		system("cls");
	}
	
	return 0;
}
