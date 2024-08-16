#pragma once
class plorg 
{
private:
	char name[19];
	int ci;
public:
	plorg();
	void report()const;
	void change(int new_ci);
};