#pragma once
// base class
class Cd {  // represents a CD disk
private://��Ϊ�����޷�ֱ�ӷ���private ���������Ϊprotect
	char performers[50];
	char label[20];
	int selections;   // number of selections
	double playtime;  // playing time in minutes
public:
	//ֻ������Ϊconst�ſ��Խ���"as"��Ϊ����
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
	Classic(const char * s,const char * s1,const char * s2, int n, double x);//constructorҪ��virtual�� ����
	Classic();
	virtual	void Report() const;//����virtual���Ǿ�̬��
	Classic & operator=(const Classic &);//��������const Classic &��--->����
};