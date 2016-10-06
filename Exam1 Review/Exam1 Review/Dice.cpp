#pragma once
#include <iostream>
#include <cstdlib>
#include "Dice.h" //including Dice header file
using namespace std;


Dice::Dice(int sides) //constructor sets Dice object using int sides
{
	//checks the number of sides is valid
	if (sides <= 0)
		sides = 6;
	numSides = sides;
	numRolls = 0;
}
int Dice::Roll()// Returns the results of a roll (random value between 1 and sides)
{
	//Increments the number of times this dice was rolled
	numRolls++;
	//random number generator is seeded in main
	return (rand() % numSides) + 1;
}
int Dice::GetRolls() // Returns the number of times this dice was rolled since it was created.
{
	return numRolls;
}
int Dice::GetSides() // Returns the number of sides for this dice object.
{
	return numSides;
}