#ifndef COMPUTER_H
#define COMPUTER_H

class Computer
{
protected:
	char move;
public:
	Computer();
	~Computer();
	virtual void setmove();
	char getmove();
};

#endif