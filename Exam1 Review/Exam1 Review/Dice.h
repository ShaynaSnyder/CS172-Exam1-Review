#pragma once
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "stdio.h"

//creates Dice class
class Dice
{
private:	//declares int variable sides as private
	int sides;
public:		//declares functions as public
	Dice(int sides);
	int Roll();
	int GetRolls();
	int GetSides();
};