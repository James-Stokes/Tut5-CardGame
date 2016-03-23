#include "DeckOfCards.h"
#include <time.h>
#include <stdlib.h>

DeckOfCards::DeckOfCards()
{
	srand(time(0));
}

void DeckOfCards::popualte()
{
	for (int i = 0; i < 20; i++) {
		if (i < 10)
			cards[i] = new Card(i+1, "red");
		else
			cards[i] = new Card(i+1, "black");
	}
		
}

Card ** DeckOfCards::reset()
{
	return cards;
}

void DeckOfCards::shuffle()
{
	if (cards[1] != NULL) {
		for (int i = 0; i < 50; i++) {
			int randomNum1 = rand() % 19;
			int randomNum2 = rand() % 19;
			Card *temp = cards[randomNum1];
			cards[randomNum1] = cards[randomNum2];
			cards[randomNum2] = temp;
		}
	}
	else
		cout << "ERROR: requires at least 2 elements in the array" << endl;
			
}

Card DeckOfCards::draw()
{
	Card temp;
	static int i = 1;
	if (cards[numOfCards() - i] == NULL) {
		i++;
	}
		temp = *cards[numOfCards() - i];
		delete cards[numOfCards() - i];
		cards[numOfCards() - i] = NULL;
		return temp;
	
	return temp;
}

Card * DeckOfCards::peek()
{
	return cards[numOfCards()-1];
}

int DeckOfCards::numOfCards()
{
	return sizeof(cards) / sizeof(cards[0]);
}




DeckOfCards::~DeckOfCards()
{
}
