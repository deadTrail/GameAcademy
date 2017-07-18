//#pragma once
#ifndef __MAPDRAW_H__
#define __MAPDRAW_H__
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "define.h"
enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };
enum MAP_TYPE { ROAD, WALL, GEM };
void goToXY(int, int);
void setCursorType(CURSOR_TYPE);
void Title();
void MapPrint();
void Clear();

extern int heroX, heroY;
extern int maze[10][10];
#endif