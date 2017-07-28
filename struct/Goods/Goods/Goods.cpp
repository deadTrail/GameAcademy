// Goods.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#pragma warning (disable:4996)
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct tagGOODS
{
	char name[21];
	int price;
	float rate;
}GOODS;
enum TYPE
{
	NAME = 1,
	HIGH_PRICE,
	LOW_PRICE,
	RATE
};

enum ACTION
{
	EXIT = 0,
	ADD_GOODS ,
	SORT_GOODS,
	DRAW_GOODS
};

int ShowMain();
void AddGoods(GOODS *[MAX],int*);
void DrawGoods(GOODS *[MAX], int);
void SortGoods(GOODS *[MAX], int);
void Swap(GOODS *,GOODS*);
void releaseAll(GOODS *[MAX], int);

int main()
{
	int len = 0;
	int sel;
	GOODS * goods[MAX];
	printf("----상품 관리 시스템 입니다----\n");
	do
	{
		switch (sel = ShowMain()) {
		case ADD_GOODS:
			AddGoods(goods,&len);
			break;
		case SORT_GOODS:
			SortGoods(goods, len);
			break;
		case DRAW_GOODS:
			DrawGoods(goods, len);
			break;
		case EXIT:
			exit(0);
		default:
			printf("잘못된 입력입니다. 다시 입력해 주세요.\n");
			break;	
		}
	} while (true);
	releaseAll(goods,len);
    return 0;
}
void Swap(GOODS * g1, GOODS * g2)
{
	GOODS tmp;
	tmp = *g1;
	*g1 = *g2;
	*g2 = tmp;
}

int ShowMain()
{
	int select = 0;
	printf("----------------------------\n");
	printf("---------1.상품 추가--------\n");
	printf("---------2.상품 정렬--------\n");
	printf("---------3.상품 표시--------\n");
	printf("------------0.종료----------\n");
	printf("----------------------------\n");
	scanf("%d", &select);
	return select;
}

void AddGoods(GOODS * goods[MAX], int* len)
{
	if (*len >= MAX)
	{
		printf("상품이 너무 많습니다.");
		return;
	}
	GOODS * tmpGoods = NULL;
	tmpGoods = (GOODS*)malloc(sizeof(GOODS));
	printf("상품의 이름을 입력하세요\n");
	scanf("%s", tmpGoods->name);
	printf("상품의 가격을 입력하세요\n");
	scanf("%d", &(tmpGoods->price));
	printf("상품의 평점을 입력하세요\n");
	scanf("%f", &(tmpGoods->rate));
	if (*len <= MAX)
	{
		goods[(*len)++] = tmpGoods;
	}
}
void SortGoods(GOODS * goods[MAX], int len)
{
	int selectSortMethod=0;
	printf("-----------1.이름 정렬-----------\n");
	printf("---------2.높은 가격 정렬--------\n");
	printf("---------3.낮은 가격 정렬--------\n");
	printf("-----------4.평점 정렬-----------\n");
	scanf("%d", &selectSortMethod);
	switch (selectSortMethod) {
	case NAME:
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len - 1 - i; j++)
			{
				if (strcmp(goods[j]->name, goods[j+1]->name) > 0)
				{
					Swap(goods[j], goods[j + 1]);
				}
			}
		}
		break;
	case HIGH_PRICE:
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len - 1 - i; j++)
			{
				if (goods[j]->price < goods[j + 1]->price )
				{
					Swap(goods[j], goods[j + 1]);
				}
			}
		}
		break;
	case LOW_PRICE:
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len - 1 - i; j++)
			{
				if (goods[j]->price > goods[j + 1]->price)
				{
					Swap(goods[j], goods[j + 1]);
				}
			}
		}
		break;
	case RATE:
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len - 1 - i; j++)
			{
				if (goods[j]->rate < goods[j + 1]->rate)
				{
					Swap(goods[j], goods[j + 1]);
				}
			}
		}
		break;

	}
}
void DrawGoods(GOODS * goods[MAX], int len)
{
	printf("|%2s||%20s||%5s||%2s|\n", "번호", "이름", "가격", "평점");
	for (int i = 0; i < len; i++)
	{
		printf("|%2d||%20s||%5d||%2.2lf|\n", i+1, goods[i]->name, goods[i]->price, goods[i]->rate);
	}
}
void releaseAll(GOODS * goods[MAX], int len)
{
	for (int i = 0; i < len; i++)
	{
		free(goods[i]);
	}
}