#include"allfuns.h"


int main()
{
	ege::setinitmode(ege::INIT_ANIMATION + ege::INIT_WITHLOGO);				// 图形初始化

	ege::initgraph(Win_L, Win_H);

	setcaption("坦克大战加强版");											//修改窗口名称
	setbkmode(TRANSPARENT);



	ege::randomize();		  												 // 随机数初始化，如果需要使用随机数的话

	mainloop();																// 程序主循环
		
	ege::closegraph();														 // 关闭绘图设备

	return 0;

}