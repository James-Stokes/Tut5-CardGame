#include "DeckOfCards.h"
#include <time.h>
#include <stdlib.h>

DeckOfCards::DeckOfCards()
{
	srand(time(NULL));
}

void DeckOfCards::popualte()
{
	for (int i = 0; i < 20; i++) {
		if (i < 10)
			cards[i] = new Card(i, "red");
		else
			cards[i] = new Card(i, "black");
	}
		
}

Card ** DeckOfCards::reset()
{
	return cards;
}

void DeckOfCards::shuffle()
{
		int randomNum1 = rand();
		int randomNum2 = rand();

		if (cards+1 != NULL) {
			for (int i = 0; i < 50; i++) {
				Card *temp = cards[randomNum1];
				cards[randomNum1] = cards[randomNum2];
				cards[randomNum2] = temp;
			}
		}
}

Card * DeckOfCards::draw()
{
	int numOfElements = sizeof(cards) / sizeof(cards[0]);

	Card *temp = cards[numOfElements - 1];
	delete cards[numOfElements - 1];
	cards[numOfElements - 1] = NULL;
	
	return temp;
}


DeckOfCards::~DeckOfCards()
{
}
