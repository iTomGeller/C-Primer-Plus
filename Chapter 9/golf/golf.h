#pragma once
const int Len = 40;//Ĭ��Ϊstatic const ���Ƕ�Ӧcpp�ļ���Ȼ������
struct golf {
	char fullname[Len];
	int handicap;
};
void setgolf(golf & g, const char * name, int hc);
void handicap(golf & g, int hc);
void showgolf(const golf & g);