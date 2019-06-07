#pragma once
#ifndef __MainTank_H__
#define __MainTank_H__


#include "Tank.h"

class MainTank:public Tank
{
public:
	MainTank();
	~MainTank();
	void SetX(int t);
	void SetY(int t);
	int GetX();
	int GetY();

private:
	int i_life;
	int i_x;
	int i_y;
};
#endif // !__MainTank_H__