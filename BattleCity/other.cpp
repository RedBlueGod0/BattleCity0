#include"function.h"


int Get_dig(int min, int max)
{
	// randomf() ����һ�� 0 �� 1 ֮������������
	int i;
	while (true)
	{
		i = (int)(randomf() * max);
		if (i >= min && i <= max)
			break;
	}
	return i;
}