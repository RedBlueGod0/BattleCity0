#include "Map.h"



Map::Map()
{
}

Map::~Map()
{
}

Maps* Map::Loadmap(int &level)
{
	Maps *temp = (Maps*)malloc(sizeof(Maps));
	char buffer[256];

	FILE *fp;
	sprintf(buffer, "Sources/��ͼ/date/PVE1/%d.txt", level);
	fp = fopen(buffer, "r");

	temp->level = level;
	temp->enemy_num = 17;
	int m = 1;

	for (int i = 0;; i++) {    //ѭ����ȡ�ļ����ݣ�ֱ���ﵽ�˳�����
		fgets(temp->map[i], 256, fp);   //��ȡһ���ַ���
		temp->map[i][strlen(temp->map[i]) - 1] = '\0';//���ַ���ĩβ�ֶ����Ͻ�����'\0'
		for (int j = 0; temp->map[i][j] != '\0'; j++) {
			switch (temp->map[i][j]) {
			case '1':
				temp->x1 = j;
				temp->y1 = i;
				break;
			case '7':
				temp->x2 = j;
				temp->y2 = i;
				break;
			case '6':
				temp->born_x[m++] = j;
				temp->born_y[m++] = i;
				break;
			case 'X':
			case 'Q':
				break;
			}
		}
		if (temp->map[i][26] == '|') {//���ַ����ڶ�λ����'|'ʱ��ʾ����Ϊ���һ�У��ļ���ȡ����
			temp->map[i][26] = '#';//����λ�ַ�����Ϊ'='
			temp->h = i + 1;
			break;//����ѭ��
		}
	}

	fclose(fp);
	return temp;

}
