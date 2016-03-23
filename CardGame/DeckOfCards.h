#include "Card.h"

class DeckOfCards
{
private:
	Card *cards[20];

public:
	DeckOfCards();
	void popualte();//initialises all cards in red and black arrays
	Card ** reset();
	void shuffle();
	Card * draw();
	~DeckOfCards();
};

