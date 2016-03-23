#include "Card.h"

using namespace std;

Card::Card(int number = -1, string CardColour = "not set")
{
	this->number = number;
	this->CardColour = CardColour;
}

string Card::colour()
{
	return CardColour;
}

void Card::print()
{
	cout << "colour: " << CardColour << " number: " << number << endl;
}

Card::~Card()
{
}