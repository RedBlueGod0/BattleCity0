#pragma once
#ifndef __AI_Tank_H__
#define __AI_Tank_H__
#include "Tank.h"

class AI_Tank:public Tank
{
public:
	AI_Tank();
	~AI_Tank();
	void SetX(int t);
	void SetY(int t);
	int GetX();
	int GetY();

private:
	int e_life;
	int e_x;
	int e_y;

};
#endif // !AI_TANK_H_FILE

