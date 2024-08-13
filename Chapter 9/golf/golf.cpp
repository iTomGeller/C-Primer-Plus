#include <iostream>
#include<cstring>
#include "golf.h"
void setgolf(golf & g, const char * name, int hc)
{
	//g.fullname = name;
	std::memcpy(g.fullname, name, Len);
	g.handicap = hc;
}
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf & g)
{
	std::cout << "the full name is " << g.fullname;
	std::cout << std::endl << "the handicap is " << g.handicap << std::endl;
}