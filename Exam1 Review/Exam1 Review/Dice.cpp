#pragma once
#include <iomanip>
#include "Dice.h" //including Dice header file
using namespace std;


Dice::Dice(int sides) //constructor sets Dice object using int sides
{

}
				// The constructor also calls srand() to initialize the random number generator.
int Dice::Roll()// Returns the results of a roll (random value between 1 and sides)
{
	int rolls;
	rolls = rand() % 6 + 1;
	return rolls;
}
int Dice::GetRolls() // Returns the number of times this dice was rolled since it was created.
{
	int rolls;
	rolls = Roll();
	return rolls;
}
int Dice::GetSides() // Returns the number of sides for this dice object.
{
	return sides;
}