#include"allfuns.h"
Menu menu_a;
mouse_msg mouse_a;


void mainloop()
{
	int scenes = 1;
	int count = 0;
	int level;
	int model = 1;

	while( is_run()) {
		switch (scenes)
		{
		case 1:

			menu_a.MainMenu();
			break;
		case 2:
			menu_a.MainMenu1();
			break;
		case 3:
			menu_a.MainMenu2();
			break;
		case 4:
			menu_a.SelectLevel_1(level);
			break;
		case 5:
			menu_a.SelectLevel_2(level);
			break;
		case 6:
			menu_a.SelectLevel_3(level);
			break;
		case 7:
			menu_a.SelectWeapon_1();
			break;
		case 8:
			menu_a.SelectWeapon_2();
			break;
		case 9:
			menu_a.SelectWeapon_3();
			break;
		case 10:
			menu_a.shop_menu_1();
			break;
		case 11:
			menu_a.shop_menu_2();
			break;
		case 12:
			menu_a.shop_menu_3();
			break;
		case 13:
			scenes = gameloop1();
			break;
		case 14:
			scenes = gameloop2();
			break;
		case 15:
			scenes = gameloop3();
			break;
		default:
			break;
		}

		flushmouse();
		mouse_a = getmouse();

		
		if (mouse_a.is_right())
		{
			switch (scenes)
			{
			case 1:
				if ((mouse_a.x > 855 && mouse_a.x < 1165) && (mouse_a.y > 200 && mouse_a.y < 280) )
					scenes = 2;
				
				else if ((mouse_a.x > 855 && mouse_a.x < 1165) && (mouse_a.y > 300 && mouse_a.y < 380) && mouse_a.is_right())
					return;
				break;
			case 2:
				if ((mouse_a.x > 855 && mouse_a.x) < 1165 && (mouse_a.y > 200 && mouse_a.y < 280) && mouse_a.is_right()) {
					scenes = 3;
					model = 1;
				}
				else if ((mouse_a.x > 855 && mouse_a.x) < 1165 && (mouse_a.y > 300 && mouse_a.y < 380) && mouse_a.is_right()) {
					scenes = 3;
					model = 2;
				}
				else if ((mouse_a.x > 855 && mouse_a.x) < 1165 && (mouse_a.y > 400 && mouse_a.y < 480) && mouse_a.is_right()) {
					scenes = 3;
					model = 3;
				}
				break;
			case 3:
				if ((mouse_a.x > 855 && mouse_a.x) < 1165 && (mouse_a.y > 200 && mouse_a.y < 280) && mouse_a.is_right() && model == 1) {
					scenes = 13;
				}
				else if ((mouse_a.x > 855 && mouse_a.x) < 1165 && (mouse_a.y > 200 && mouse_a.y < 280) && mouse_a.is_right() && model == 2) {
					scenes = 14;
				}
				else if ((mouse_a.x > 855 && mouse_a.x) < 1165 && (mouse_a.y > 200 && mouse_a.y < 280) && mouse_a.is_right() && model == 3) {
					scenes = 15;
				}
				break;

			default:
				break;
			}
		}
	}


}