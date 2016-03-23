#include "Card.h"

using namespace std;

Card::Card(const int number, const string cardColour) : number(number), cardColour(cardColour)
{
}

string Card::colour()
{
	return cardColour;
}

void Card::print()
{
	cout << "colour: " << cardColour << " number: " << number << endl;
}

Card::~Card()
{
}