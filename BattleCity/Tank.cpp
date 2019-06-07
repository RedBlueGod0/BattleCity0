#include "Tank.h"

Tank::Tank()
{
}

Tank::~Tank()
{
}

void Tank::moveUp(int &y)
{
	y--;
}
void Tank::moveDown(int &y)
{
	y++;
}
void Tank::moveright(int &x)
{
	x++;
}
void Tank::moveleft(int &x)
{
	x--;
}
void Tank::shoot(direction dir, int kind,int x,int y)
{
	x = t_x;
	y = t_y;
	switch (dir)
	{
	case up:
		y--;
		break;
	case down:
		y++;
		break;
	case right1:
		x++;
		break;
	case left1:
		x--;
		break;
	default:
		break;
	}

}
