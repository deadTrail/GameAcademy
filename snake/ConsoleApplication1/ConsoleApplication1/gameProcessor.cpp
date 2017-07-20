#include "gameProcessor.h"


void DrawSnake(int dir)
{
	DrawChar(BASE_X + snake_x[length - 1], BASE_Y + snake_y[length - 1], " ");
	for (int i = length - 1; i > 0; i--)
	{
		snake_x[i] = snake_x[i - 1];
		snake_y[i] = snake_y[i - 1];
	}
	DrawChar(BASE_X + snake_x[0], BASE_Y + snake_y[0], "¡Û");
	if (dir == LEFT)
	{
		--snake_x[0];
	}
	if (dir == RIGHT)
	{
		++snake_x[0];
	}
	if (dir == UP)
	{
		--snake_y[0];
	}
	if (dir == DOWN)
	{
		++snake_y[0];
	}
	DrawChar(BASE_X + snake_x[0], BASE_Y + snake_y[0], "¡ß");
}

void KeyProcess()
{
	if (_kbhit())
	{
		do {
			key = _getch();
		} while (key == 224);
	}
	Sleep(speed);
	switch (key) {
	case LEFT:
	case RIGHT:
	case UP:
	case DOWN:
		if ((dir == LEFT && key != RIGHT) || (dir == RIGHT && key != LEFT) || (dir == UP && key != DOWN) || (dir == DOWN && key != UP))
		{
			dir = key;
		}
		break;
	case ESC:
		exit(0);
	}

}
void GameProcess()
{
	//º®¿¡ ºÎµúÇûÀ» ¶§
	if (snake_x[0] == 0 || snake_x[0] == MAP_WIDTH || snake_y[0] == 0 || snake_y[0] == MAP_HEIGHT)
	{
		GameOver();
	}
	//ÀÚ±â ¸öÅëÀÌ³ª ²¿¸®¿¡ ´ê¾ÒÀ»¶§
	for (int i = 1; i < length; i++)
	{
		if (snake_x[0] == snake_x[i] && snake_y[0] == snake_y[i])
		{
			GameOver();
		}
	}
	//¸ÔÀÌ¸¦ ¸Ô¾úÀ» ¶§
	if (snake_x[0] == foodX && snake_y[0] == foodY)
	{
		score += 10;
		MakeFood();
		length++;
		snake_x[length - 1] = snake_x[length - 2];
		snake_y[length - 1] = snake_y[length - 2];
		if (speed > BASE_SPEED)
		{
			speed -= 20;
		}
	}
}