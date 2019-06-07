#pragma once
#ifndef __Tank_H__
#define __Tank_H__
#include"function.h"


class Tank
{
public:
	Tank();
	~Tank();

	void shoot(direction dir,int kind,int x,int y);
	void moveUp(int &y);
	void moveDown(int &y);
	void moveright(int &x);
	void moveleft(int &x);


private:
	int t_life;
	int t_x;
	int t_y;
	direction direct;
};
#endif // !TANK_H