#pragma once
#include"function.h"
#include<ege.h>
#include <graphics.h>

class Picture
{
public:
	//菜单界面----------------------
	PIMAGE menu1 = newimage();
	PIMAGE menu2 = newimage();
	PIMAGE menu3 = newimage();

	PIMAGE start_game = newimage();
	PIMAGE creat_map = newimage();
	PIMAGE exit_game = newimage();

	PIMAGE pve1 = newimage();
	PIMAGE pve2 = newimage();
	PIMAGE pvp = newimage();

	PIMAGE select_level = newimage();
	PIMAGE select_weapon = newimage();
	PIMAGE shop = newimage();

	PIMAGE back_game = newimage();
	PIMAGE back_menu = newimage();


	//地图资源---------------------------------
	PIMAGE tree = newimage();
	PIMAGE wall_0 = newimage();
	PIMAGE wall_1 = newimage();
	PIMAGE water = newimage();


	//子弹------------------------------------
	PIMAGE me_bullet = newimage();
	PIMAGE enemy_bullet = newimage();


	//玩家坦克--------------------------------
	PIMAGE me1_d0 = newimage();
	PIMAGE me1_d1 = newimage();
	PIMAGE me1_l0 = newimage();
	PIMAGE me1_l1 = newimage();
	PIMAGE me1_r0 = newimage();
	PIMAGE me1_r1 = newimage();
	PIMAGE me1_u0 = newimage();
	PIMAGE me1_u1 = newimage();

	PIMAGE me2_d0 = newimage();
	PIMAGE me2_d1 = newimage();
	PIMAGE me2_l0 = newimage();
	PIMAGE me2_l1 = newimage();
	PIMAGE me2_r0 = newimage();
	PIMAGE me2_r1 = newimage();
	PIMAGE me2_u0 = newimage();
	PIMAGE me2_u1 = newimage();


	//敌方坦克------------------------------------
	PIMAGE enemy1_d0 = newimage();
	PIMAGE enemy1_d1 = newimage();
	PIMAGE enemy1_l0 = newimage();
	PIMAGE enemy1_l1 = newimage();
	PIMAGE enemy1_r0 = newimage();
	PIMAGE enemy1_r1 = newimage();
	PIMAGE enemy1_u0 = newimage();
	PIMAGE enemy1_u1 = newimage();

	PIMAGE enemy2_d0 = newimage();
	PIMAGE enemy2_d1 = newimage();
	PIMAGE enemy2_l0 = newimage();
	PIMAGE enemy2_l1 = newimage();
	PIMAGE enemy2_r0 = newimage();
	PIMAGE enemy2_r1 = newimage();
	PIMAGE enemy2_u0 = newimage();
	PIMAGE enemy2_u1 = newimage();

	PIMAGE enemy3_d0 = newimage();
	PIMAGE enemy3_d1 = newimage();
	PIMAGE enemy3_l0 = newimage();
	PIMAGE enemy3_l1 = newimage();
	PIMAGE enemy3_r0 = newimage();
	PIMAGE enemy3_r1 = newimage();
	PIMAGE enemy3_u0 = newimage();
	PIMAGE enemy3_u1 = newimage();

	PIMAGE enemy4_d0 = newimage();
	PIMAGE enemy4_d1 = newimage();
	PIMAGE enemy4_l0 = newimage();
	PIMAGE enemy4_l1 = newimage();
	PIMAGE enemy4_r0 = newimage();
	PIMAGE enemy4_r1 = newimage();
	PIMAGE enemy4_u0 = newimage();
	PIMAGE enemy4_u1 = newimage();

	PIMAGE enemy5_d0 = newimage();
	PIMAGE enemy5_d1 = newimage();
	PIMAGE enemy5_l0 = newimage();
	PIMAGE enemy5_l1 = newimage();
	PIMAGE enemy5_r0 = newimage();
	PIMAGE enemy5_r1 = newimage();
	PIMAGE enemy5_u0 = newimage();
	PIMAGE enemy5_u1 = newimage();

	PIMAGE enemy6_d0 = newimage();
	PIMAGE enemy6_d1 = newimage();
	PIMAGE enemy6_l0 = newimage();
	PIMAGE enemy6_l1 = newimage();
	PIMAGE enemy6_r0 = newimage();
	PIMAGE enemy6_r1 = newimage();
	PIMAGE enemy6_u0 = newimage();
	PIMAGE enemy6_u1 = newimage();

	PIMAGE enemy7_d0 = newimage();
	PIMAGE enemy7_d1 = newimage();
	PIMAGE enemy7_l0 = newimage();
	PIMAGE enemy7_l1 = newimage();
	PIMAGE enemy7_r0 = newimage();
	PIMAGE enemy7_r1 = newimage();
	PIMAGE enemy7_u0 = newimage();
	PIMAGE enemy7_u1 = newimage();


	//商店物品-------------------------------

	Picture();
	~Picture();


};

