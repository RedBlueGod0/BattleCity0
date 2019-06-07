#include "MainTank.h"



MainTank::MainTank()
{
}

MainTank::~MainTank()
{
}

void MainTank::SetX(int t)
{
	i_x = t;
}
void MainTank::SetY(int t)
{
	i_y = t;
}
int MainTank::GetX()
{
	return i_x;
}
int MainTank::GetY()
{
	return i_y;
}