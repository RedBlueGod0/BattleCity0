#include"allfuns.h"

extern Menu menu_a;
extern mouse_msg mouse_a;

int gameloop1()			//����ģʽ
{
	MainTank tank1;
	MainTank e_tank[17];
	int count = 0;

	for (; is_run(); delay_fps(60)) {
		if (count > 60)
			count = 0;
		count += 2;



	}


	return 0;
}

int gameloop2()			//˫��ģʽ
{
	MainTank tank1;
	MainTank tank2;
	MainTank e_tank[17];
	int count =0;


	for (; is_run(); delay_fps(60)) {
		if (count > 60)
			count = 0;
		count += 2;



	}
	return 0;
}

int gameloop3()			//��սģʽ
{
	MainTank tank1;
	MainTank tank2;
	MainTank e_tank[17];
	int count = 0;

	for (; is_run(); delay_fps(60)){
		if (count > 60)
			count = 0;
		count += 2;



	}

	return 0;
}