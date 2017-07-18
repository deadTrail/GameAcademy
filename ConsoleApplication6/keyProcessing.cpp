#include "keyprocessing.h"
void KeyProcessing()
{
	int key = 0;
	if (_kbhit())
	{
		key = _getch();
		if (key == 224)
		{
			key = _getch();
			switch (key)
			{
			case UP:
				if (heroY - 1 > 0 && maze[heroY - 1][heroX] != WALL)
				{
					if (maze[heroY - 1][heroX] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroY--;
					}
				}
				break;
			case DOWN:
				if (heroY + 1 < MAP_HIGHT && maze[heroY + 1][heroX] != WALL)
				{
					if (maze[heroY + 1][heroX] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroY++;
					}
				}
				break;
			case LEFT:
				if (heroX - 1 > 0 && maze[heroY][heroX - 1] != WALL)
				{
					if (maze[heroY][heroX - 1] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroX--;
					}
				}
				break;
			case RIGHT:
				if (heroX + 1 < MAP_WIDTH && maze[heroY][heroX + 1] != WALL)
				{
					if (maze[heroY][heroX + 1] == GEM)
					{
						Clear();
						heroX = heroY = 0;
					}
					else
					{
						heroX++;
					}
				}
				break;
			default:
				break;
			}
		}
		else
		{
			if (key == ESC)
			{
				exit(0);
			}
		}
	}
	while (_kbhit())
	{
		_getch();
	}
}