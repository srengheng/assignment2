#include "Computer.h"

Computer::Computer() { this->move = 'R'; }

Computer::~Computer() {}

void Computer::setmove() { this->move = 'R'; }

char Computer::getmove() { return this->move; }