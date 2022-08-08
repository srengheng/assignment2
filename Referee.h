#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"

class Referee
{
	char outcome;
public:
	Referee();
	~Referee();
	char refGame(Human, Computer);
};

#endif