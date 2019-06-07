#include "AI_Tank.h"



AI_Tank::AI_Tank()
{
}

AI_Tank::~AI_Tank()
{
}

void AI_Tank::SetX(int t)
{
	e_x = t;
}
void AI_Tank::SetY(int t)
{
	e_y = t;
}
int AI_Tank::GetX()
{
	return e_x;
}
int AI_Tank::GetY()
{
	return e_y;
}
