#include"allfuns.h"


int main()
{
	ege::setinitmode(ege::INIT_ANIMATION + ege::INIT_WITHLOGO);				// ͼ�γ�ʼ��

	ege::initgraph(Win_L, Win_H);

	setcaption("̹�˴�ս��ǿ��");											//�޸Ĵ�������
	setbkmode(TRANSPARENT);



	ege::randomize();		  												 // �������ʼ���������Ҫʹ��������Ļ�

	mainloop();																// ������ѭ��
		
	ege::closegraph();														 // �رջ�ͼ�豸

	return 0;

}