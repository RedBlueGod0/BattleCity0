#pragma once
#include<Windows.h>
#include<iostream>
#include<string>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<ege.h>
#include <graphics.h>
#include <mmsystem.h>
using namespace std;

enum direction { up, down, right1, left1 };
int const Win_L = 1280;
int const Win_H = 720;

typedef struct map {
	char map[50][50];
	int level;
	int h;

	int x1, y1;
	int x2, y2;

	int enemy_num;
	int born_x[3];
	int born_y[3];
}Maps;

int Get_dig(int min, int max);


