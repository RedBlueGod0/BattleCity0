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
	sprintf(buffer, "Sources/地图/date/PVE1/%d.txt", level);
	fp = fopen(buffer, "r");

	temp->level = level;
	temp->enemy_num = 17;
	int m = 1;

	for (int i = 0;; i++) {    //循环读取文件内容，直到达到退出条件
		fgets(temp->map[i], 256, fp);   //读取一行字符串
		temp->map[i][strlen(temp->map[i]) - 1] = '\0';//在字符串末尾手动加上结束符'\0'
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
		if (temp->map[i][26] == '|') {//当字符串第二位出现'|'时表示该行为最后一行，文件读取结束
			temp->map[i][26] = '#';//将该位字符设置为'='
			temp->h = i + 1;
			break;//跳出循环
		}
	}

	fclose(fp);
	return temp;

}
