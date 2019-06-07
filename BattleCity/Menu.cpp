#include "Menu.h"

Menu::Menu():isAlone(1),Level1(1),Level2(1),Level3(1)
{
}
Menu::Menu(int temp):Level1(1), Level2(1), Level3(1)
{
	isAlone = temp;
}
Menu::~Menu()
{

}

//����������
void Menu::MainMenu()
{
	PIMAGE start_game = newimage();
	PIMAGE creat_map = newimage();
	PIMAGE exit_game = newimage();
	PIMAGE menu1 = newimage();
	PIMAGE menu2 = newimage();
	PIMAGE menu3 = newimage();
	PIMAGE pve1 = newimage();
	PIMAGE pve2 = newimage();
	PIMAGE pvp = newimage();
	PIMAGE select_level = newimage();
	PIMAGE select_weapon = newimage();
	PIMAGE shop = newimage();
	PIMAGE back_game = newimage();
	PIMAGE back_menu = newimage();

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



	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	putimage(0, 0,menu1);

	putimage_withalpha(NULL, start_game, 855, 200);
	putimage_withalpha(NULL, creat_map, 855, 300);
	putimage_withalpha(NULL, exit_game, 855, 400);

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
	

}
void Menu::MainMenu1()
{
	PIMAGE start_game = newimage();
	PIMAGE creat_map = newimage();
	PIMAGE exit_game = newimage();
	PIMAGE menu1 = newimage();
	PIMAGE menu2 = newimage();
	PIMAGE menu3 = newimage();
	PIMAGE pve1 = newimage();
	PIMAGE pve2 = newimage();
	PIMAGE pvp = newimage();
	PIMAGE select_level = newimage();
	PIMAGE select_weapon = newimage();
	PIMAGE shop = newimage();
	PIMAGE back_game = newimage();
	PIMAGE back_menu = newimage();

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


	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	putimage(0, 0, menu2);
	putimage_withalpha(NULL, pve1, 855, 200);
	putimage_withalpha(NULL, pve2, 855, 300);
	putimage_withalpha(NULL, pvp, 855, 400);



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
}
void Menu::MainMenu2()
{

	PIMAGE start_game = newimage();
	PIMAGE creat_map = newimage();
	PIMAGE exit_game = newimage();
	PIMAGE menu1 = newimage();
	PIMAGE menu2 = newimage();
	PIMAGE menu3 = newimage();
	PIMAGE pve1 = newimage();
	PIMAGE pve2 = newimage();
	PIMAGE pvp = newimage();
	PIMAGE select_level = newimage();
	PIMAGE select_weapon = newimage();
	PIMAGE shop = newimage();
	PIMAGE back_game = newimage();
	PIMAGE back_menu = newimage();

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


	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	putimage(0, 0, menu2);
	putimage_withalpha(NULL, select_level, 855, 200);
	putimage_withalpha(NULL, select_weapon, 855, 300);
	putimage_withalpha(NULL, shop, 855, 400);



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

}



//����ģʽ��ѡ��ؿ�������Ƥ�����̵����
void Menu::SelectLevel_1(int& level)
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfontbkcolor(EGERGB(0x80, 0x00, 0x80));
	setfont(60, 0, "����");
	setbkmode(TRANSPARENT);
	outtextxy(420, 150, "���أ�");

	setfont(40, 0, "����");
	char str[20];
	sprintf(str, "�����ܼƲ���:%d", Level1);
	outtextxy(350, 250, str);


}
void Menu::SelectWeapon_1()
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

}
void Menu::shop_menu_1()
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

}

//˫��ģʽ��ѡ��ؿ�������Ƥ�����̵����
void Menu::SelectLevel_2(int& level)
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfontbkcolor(EGERGB(0x80, 0x00, 0x80));
	setfont(60, 0, "����");
	setbkmode(TRANSPARENT);
	outtextxy(420, 150, "���أ�");

	setfont(40, 0, "����");
	char str[20];
	sprintf(str, "�����ܼƲ���:%d", Level2);
	outtextxy(350, 250, str);


}
void Menu::SelectWeapon_2()
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

}
void Menu::shop_menu_2()
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

}

//��սģʽ��ѡ��ؿ�������Ƥ�����̵����
void Menu::SelectLevel_3(int& level)
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfontbkcolor(EGERGB(0x80, 0x00, 0x80));
	setfont(60, 0, "����");
	setbkmode(TRANSPARENT);
	outtextxy(420, 150, "���أ�");

	setfont(40, 0, "����");
	char str[20];
	sprintf(str, "�����ܼƲ���:%d", Level3);
	outtextxy(350, 250, str);

}
void Menu::SelectWeapon_3()
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

}
void Menu::shop_menu_3()
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);



}



//����ģʽ����Ϸ����
void Menu::gamemenu1(int &level)
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	map = real_map.Loadmap(Level1);

	for (int i = 0; i <= 17; i++)
	{
		for (int t = 0; t < strlen(map->map[0]); t++)
		{
			


		}
	}


}
//˫��ģʽ����Ϸ����
void Menu::gamemenu2(int &level)
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	map = real_map.Loadmap(Level2);

	for (int i = 0; i <= 17; i++)
	{
		for (int t = 0; t < strlen(map->map[0]); t++)
		{



		}
	}


}
//��սģʽ����Ϸ����
void Menu::gamemenu3(int &level)
{
	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	map = real_map.Loadmap(Level3);

	for (int i = 0; i <= 17; i++)
	{
		for (int t = 0; t < strlen(map->map[0]); t++)
		{



		}
	}


}


//��ͣ����
void Menu::pause_menu()
{
	PIMAGE start_game = newimage();
	PIMAGE creat_map = newimage();
	PIMAGE exit_game = newimage();
	PIMAGE menu1 = newimage();
	PIMAGE menu2 = newimage();
	PIMAGE menu3 = newimage();
	PIMAGE pve1 = newimage();
	PIMAGE pve2 = newimage();
	PIMAGE pvp = newimage();
	PIMAGE select_level = newimage();
	PIMAGE select_weapon = newimage();
	PIMAGE shop = newimage();
	PIMAGE back_game = newimage();
	PIMAGE back_menu = newimage();

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


	cleardevice();
	setcolor(EGERGB(0x40, 0xE0, 0xD0));
	setfillcolor(WHITE);
	bar(0, 715, 1280, 720);
	bar(0, 0, 5, 720);
	bar(1275, 0, 1280, 720);

	putimage(0, 0, menu2);
	putimage_withalpha(NULL, back_game, 855, 200);
	putimage_withalpha(NULL, back_menu, 855, 300);
	putimage_withalpha(NULL, exit_game, 855, 300);



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

}
