#pragma once
const int Len = 40;//默认为static const 但是对应cpp文件依然可以用
struct golf {
	char fullname[Len];
	int handicap;
};
void setgolf(golf & g, const char * name, int hc);
void handicap(golf & g, int hc);
void showgolf(const golf & g);