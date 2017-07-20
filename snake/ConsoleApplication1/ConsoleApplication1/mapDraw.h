//#pragma once
#ifndef __MAPDRAW_H__
#define __MAPDRAW_H__
#include "definition.h"

extern int snake_x[600];
extern int snake_y[600];
extern int speed;
extern int dir;
extern int length;
extern int score;
extern int key;
extern int foodX;
extern int foodY;

enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };
void DrawChar(int, int, char*);
void setCursorType(CURSOR_TYPE);
void DrawMap();
void Init();
void GameOver();
void Title();
void MakeFood();


#endif

