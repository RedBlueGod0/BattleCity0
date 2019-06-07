#include "Picture.h"
#include"function.h"


Picture::Picture()
{

	//�˵�����-----------------------------------------------------------
	getimage(menu1, "Sources/����/menu1.png");
	getimage(menu2, "Sources/����/menu2.png");
	getimage(menu3, "Sources/����/menu3.png");

	getimage(start_game, "Sources/����/101.png");
	getimage(creat_map, "Sources/����/102.png");
	getimage(exit_game, "Sources/����/103.png");

	getimage(pve1, "Sources/����/104.png");
	getimage(pve2, "Sources/����/105.png");
	getimage(pvp, "Sources/����/106.png");

	getimage(select_level, "Sources/����/107.png");
	getimage(select_weapon, "Sources/����/108.png");
	getimage(shop, "Sources/����/109.png");

	getimage(shop, "Sources/����/109.png");

	getimage(back_game, "Sources/����/110.png");
	getimage(back_menu, "Sources/����/111.png");


	//��ͼ��Դ----------------------------------------------------------
	getimage(tree, "Sources/��ͼ/20x20/tree.png");
	getimage(wall_0, "Sources/��ͼ/20x20/wall_0.png");
	getimage(wall_1, "Sources/��ͼ/20x20/wall_1.png");
	getimage(water, "Sources/��ͼ/20x20/water.png");


	//�ӵ�--------------------------------------------------------------------
	getimage(me_bullet, "Sources/̹��/�ӵ�/���/missile.png");
	getimage(enemy_bullet, "Sources/̹��/�ӵ�/����/missile.png");


	//���̹��-------------------------------------------------------------------
	getimage(me1_d0, "Sources/̹��/me/1/down1_0.png");
	getimage(me1_d1, "Sources/̹��/me/1/down1_1.png");
	getimage(me1_l0, "Sources/̹��/me/1/left1_0.png");
	getimage(me1_l1, "Sources/̹��/me/1/left1_1.png");
	getimage(me1_r0, "Sources/̹��/me/1/right1_0.png");
	getimage(me1_r1, "Sources/̹��/me/1/right1_1.png");
	getimage(me1_u0, "Sources/̹��/me/1/up1_0.png");
	getimage(me1_u1, "Sources/̹��/me/1/up1_1.png");

	getimage(me2_d0, "Sources/̹��/me/2/down2_0.png");
	getimage(me2_d1, "Sources/̹��/me/2/down2_1.png");
	getimage(me2_l0, "Sources/̹��/me/2/left2_0.png");
	getimage(me2_l1, "Sources/̹��/me/2/left2_1.png");
	getimage(me2_r0, "Sources/̹��/me/2/right2_0.png");
	getimage(me2_r1, "Sources/̹��/me/2/right2_1.png");
	getimage(me2_u0, "Sources/̹��/me/2/up2_0.png");
	getimage(me2_u1, "Sources/̹��/me/2/up2_1.png");


	//�з�̹��
	//��̹ͨ��-----------------------------------------------------------------
	getimage(enemy1_d0, "Sources/̹��/enemy/1/down1_0.png");
	getimage(enemy1_d1, "Sources/̹��/enemy/1/down1_1.png");
	getimage(enemy1_l0, "Sources/̹��/enemy/1/left1_0.png");
	getimage(enemy1_l1, "Sources/̹��/enemy/1/left1_1.png");
	getimage(enemy1_r0, "Sources/̹��/enemy/1/right1_0.png");
	getimage(enemy1_r1, "Sources/̹��/enemy/1/right1_1.png");
	getimage(enemy1_u0, "Sources/̹��/enemy/1/up1_0.png");
	getimage(enemy1_u1, "Sources/̹��/enemy/1/up1_1.png");

	//ǿ����̹ͨ��----------------------------------------------------------------
	getimage(enemy2_d0, "Sources/̹��/enemy/2/down2_0.png");
	getimage(enemy2_d1, "Sources/̹��/enemy/2/down2_1.png");
	getimage(enemy2_l0, "Sources/̹��/enemy/2/left2_0.png");
	getimage(enemy2_l1, "Sources/̹��/enemy/2/left2_1.png");
	getimage(enemy2_r0, "Sources/̹��/enemy/2/right2_0.png");
	getimage(enemy2_r1, "Sources/̹��/enemy/2/right2_1.png");
	getimage(enemy2_u0, "Sources/̹��/enemy/2/up2_0.png");
	getimage(enemy2_u1, "Sources/̹��/enemy/2/up2_1.png");

	//��߼���̹ͨ��--------------------------------------------------------------
	getimage(enemy3_d0, "Sources/̹��/enemy/3/down3_0.png");
	getimage(enemy3_d1, "Sources/̹��/enemy/3/down3_1.png");
	getimage(enemy3_l0, "Sources/̹��/enemy/3/left3_0.png");
	getimage(enemy3_l1, "Sources/̹��/enemy/3/left3_1.png");
	getimage(enemy3_r0, "Sources/̹��/enemy/3/right3_0.png");
	getimage(enemy3_r1, "Sources/̹��/enemy/3/right3_1.png");
	getimage(enemy3_u0, "Sources/̹��/enemy/3/up3_0.png");
	getimage(enemy3_u1, "Sources/̹��/enemy/3/up3_1.png");

	//����̹��---------------------------------------------------------------
	getimage(enemy4_d0, "Sources/̹��/enemy/4/down4_0.png");
	getimage(enemy4_d1, "Sources/̹��/enemy/4/down4_1.png");
	getimage(enemy4_l0, "Sources/̹��/enemy/4/left4_0.png");
	getimage(enemy4_l1, "Sources/̹��/enemy/4/left4_1.png");
	getimage(enemy4_r0, "Sources/̹��/enemy/4/right4_0.png");
	getimage(enemy4_r1, "Sources/̹��/enemy/4/right4_1.png");
	getimage(enemy4_u0, "Sources/̹��/enemy/4/up4_0.png");
	getimage(enemy4_u1, "Sources/̹��/enemy/4/up4_1.png");

	//ǿ������̹��---------------------------------------------------------------
	getimage(enemy5_d0, "Sources/̹��/enemy/5/down5_0.png");
	getimage(enemy5_d1, "Sources/̹��/enemy/5/down5_1.png");
	getimage(enemy5_l0, "Sources/̹��/enemy/5/left5_0.png");
	getimage(enemy5_l1, "Sources/̹��/enemy/5/left5_1.png");
	getimage(enemy5_r0, "Sources/̹��/enemy/5/right5_0.png");
	getimage(enemy5_r1, "Sources/̹��/enemy/5/right5_1.png");
	getimage(enemy5_u0, "Sources/̹��/enemy/5/up5_0.png");
	getimage(enemy5_u1, "Sources/̹��/enemy/5/up5_1.png");

	//��߼�����̹��------------------------------------------------------------
	getimage(enemy6_d0, "Sources/̹��/enemy/6/down6_0.png");
	getimage(enemy6_d1, "Sources/̹��/enemy/6/down6_1.png");
	getimage(enemy6_l0, "Sources/̹��/enemy/6/left6_0.png");
	getimage(enemy6_l1, "Sources/̹��/enemy/6/left6_1.png");
	getimage(enemy6_r0, "Sources/̹��/enemy/6/right6_0.png");
	getimage(enemy6_r1, "Sources/̹��/enemy/6/right6_1.png");
	getimage(enemy6_u0, "Sources/̹��/enemy/6/up6_0.png");
	getimage(enemy6_u1, "Sources/̹��/enemy/6/up6_1.png");

	//����̹��------------------------------------------------------------
	getimage(enemy7_d0, "Sources/̹��/enemy/7/down7_0.png");
	getimage(enemy7_d1, "Sources/̹��/enemy/7/down7_1.png");
	getimage(enemy7_l0, "Sources/̹��/enemy/7/left7_0.png");
	getimage(enemy7_l1, "Sources/̹��/enemy/7/left7_1.png");
	getimage(enemy7_r0, "Sources/̹��/enemy/7/rigt7_0.png");
	getimage(enemy7_r1, "Sources/̹��/enemy/7/right7_1.png");
	getimage(enemy7_u0, "Sources/̹��/enemy/7/up7_0.png");
	getimage(enemy7_u1, "Sources/̹��/enemy/7/up7_1.png");

	//�̵���Ʒ-----------------------------------------------------------
}


Picture::~Picture()
{
	//�˵�����---------------------------------------------
	delimage(menu1);
	delimage(menu2);
	delimage(menu3);

	delimage(start_game);
	delimage(creat_map);
	delimage(exit_game);

	delimage(pve1);
	delimage(pve2);
	delimage(pvp);

	delimage(select_level);
	delimage(select_weapon);
	delimage(shop);

	delimage(back_game);
	delimage(back_menu);


	//��ͼ��Դ--------------------------------------------
	delimage(tree);
	delimage(wall_0);
	delimage(wall_1);
	delimage(water);


	//�ӵ�-------------------------------------
	delimage(me_bullet);
	delimage(enemy_bullet);

	//���̹��----------------------------------------
	delimage(me1_d0);
	delimage(me1_d1);
	delimage(me1_l0);
	delimage(me1_l1);
	delimage(me1_r0);
	delimage(me1_r1);
	delimage(me1_u0);
	delimage(me1_u1);

	delimage(me2_d0);
	delimage(me2_d1);
	delimage(me2_l0);
	delimage(me2_l1);
	delimage(me2_r0);
	delimage(me2_r1);
	delimage(me2_u0);
	delimage(me2_u1);

	//�з�̹��-----------------------------------------------
	delimage(enemy1_d0);
	delimage(enemy1_d1);
	delimage(enemy1_l0);
	delimage(enemy1_l1);
	delimage(enemy1_r0);
	delimage(enemy1_r1);
	delimage(enemy1_u0);
	delimage(enemy1_u1);

	delimage( enemy2_d0);
	delimage( enemy2_d1);
	delimage( enemy2_l0);
	delimage( enemy2_l1);
	delimage( enemy2_r0);
	delimage( enemy2_r1);
	delimage( enemy2_u0);
	delimage( enemy2_u1);

	delimage(enemy3_d0);
	delimage(enemy3_d1);
	delimage(enemy3_l0);
	delimage(enemy3_l1);
	delimage(enemy3_r0);
	delimage(enemy3_r1);
	delimage(enemy3_u0);
	delimage(enemy3_u1);

	delimage(enemy4_d0);
	delimage(enemy4_d1);
	delimage(enemy4_l0);
	delimage(enemy4_l1);
	delimage(enemy4_r0);
	delimage(enemy4_r1);
	delimage(enemy4_u0);
	delimage(enemy4_u1);

	delimage(enemy5_d0);
	delimage(enemy5_d1);
	delimage(enemy5_l0);
	delimage(enemy5_l1);
	delimage(enemy5_r0);
	delimage(enemy5_r1);
	delimage(enemy5_u0);
	delimage(enemy5_u1);

	delimage(enemy6_d0);
	delimage(enemy6_d1);
	delimage(enemy6_l0);
	delimage(enemy6_l1);
	delimage(enemy6_r0);
	delimage(enemy6_r1);
	delimage(enemy6_u0);
	delimage(enemy6_u1);

	delimage(enemy7_d0);
	delimage(enemy7_d1);
	delimage(enemy7_l0);
	delimage(enemy7_l1);
	delimage(enemy7_r0);
	delimage(enemy7_r1);
	delimage(enemy7_u0);
	delimage(enemy7_u1);

	//�̵���Ʒ------------------------------------------

}




