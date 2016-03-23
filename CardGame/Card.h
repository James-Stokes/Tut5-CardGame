#include <string>
#include <iostream>

using namespace std;
class Card
{
private:
	int number;
	string CardColour;

public:
	Card();
	Card(int, string);
	string colour();
	void print();
	~Card();
};

