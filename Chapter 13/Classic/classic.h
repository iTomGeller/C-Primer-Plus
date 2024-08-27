#pragma once
// base class
class Cd {  // represents a CD disk
private://因为子类无法直接访问private 大多数定义为protect
	char performers[50];
	char label[20];
	int selections;   // number of selections
	double playtime;  // playing time in minutes
public:
	//只有设置为const才可以接受"as"作为参数
	Cd(const char * s1,const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	~Cd();
	virtual	void Report() const;  // reports all CD data
	Cd & operator=(const Cd & d);
};
class  Classic : public Cd
{
private:
	char work[50];
public:
	Classic(const char * s,const char * s1,const char * s2, int n, double x);//constructor要加virtual吗 不用
	Classic();
	virtual	void Report() const;//不用virtual就是静态绑定
	Classic & operator=(const Classic &);//这里能用const Classic &吗--->不能
};