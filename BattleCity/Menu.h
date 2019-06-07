#pragma once


#include"Map.h"
#include"Picture.h"

class Menu
{
public:
	Maps *map;

	Menu();
	Menu(int isOne);
	~Menu();



	void MainMenu();
	void MainMenu1();
	void MainMenu2();

	void SelectLevel_1(int &level);
	void SelectWeapon_1();
	void shop_menu_1();

	void SelectLevel_2(int &level);
	void SelectWeapon_2();
	void shop_menu_2();

	void SelectLevel_3(int &level);
	void SelectWeapon_3();
	void shop_menu_3();

	void gamemenu1(int &level);
	void gamemenu2(int &level);
	void gamemenu3(int &level);

	void pause_menu();
	


private:
	Picture picture;
	bool isAlone;
	Map real_map;

	
	int Level1;
	int Level2;
	int Level3;

};
