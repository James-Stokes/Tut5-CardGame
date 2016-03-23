#include <string>
#include <iostream>

using namespace std;
class Card
{
private:
	const int number;
	const string cardColour;

public:
	Card(int , string);
	string colour();
	void print();
	~Card();
};

