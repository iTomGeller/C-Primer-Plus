#pragma once
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
template <class T>
int reduce(T ar[], int n)
{
	sort(ar, ar + n);
return unique(ar, ar + n) - ar;
}