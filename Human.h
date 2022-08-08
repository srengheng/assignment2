#ifndef HUMAN_H
#define HUMAN_H
#include "Computer.h"

class Human:public Computer
{
public:
	Human();
	~Human();
	void setmove();
};

#endif
