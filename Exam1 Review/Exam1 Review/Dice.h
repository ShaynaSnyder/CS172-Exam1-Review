#pragma once
#include <stdio.h>

//creates Dice class
class Dice
{
private:	//declares int variables numSides and numRolls as private
	int numSides;
	int numRolls;
public:		//declares functions as public
	//creates a dice with the given number of sides
	Dice(int sides);
	//Rolls the dice and declares a random number
	int Roll();
	//Returns the number of times this dice was rolled
	int GetRolls();
	//Retuens the number of sides on this dice
	int GetSides();
};