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
	Card draw();
	Card * peek();
	int numOfCards();
	~DeckOfCards();
};

int main() {
	Card card(0, "test");
	DeckOfCards dc;
	dc.popualte();
	dc.shuffle();
	cout << dc.numOfCards() << endl;
	cout << "print with peek:" << endl;
	dc.peek()->print();
	cout << endl;
	Card** current = dc.reset();
	for (int i = 0; i < dc.numOfCards(); i++) {
		cout << "simply display: " << endl;
		(**current).print();
		current++;
	}
	cout << endl;
	for (int i = 0; i < dc.numOfCards(); i++) {
		cout << "display and remove: " << endl;
		dc.draw().print();
	}
	dc.shuffle();
	return 0;
}