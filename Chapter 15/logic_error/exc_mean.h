#pragma once
#include <stdexcept>
class bad_hmean : public std::logic_error {
public :
	//���캯��
	bad_hmean(): std::logic_error("hmean() invalid arguments: a = -b \n"){}
};

class bad_gmean : public std::logic_error
{
public:
	bad_gmean(): std::logic_error("gmean() arguments should be >=0\n"){}
};