#include <iostream>
#include <string>

using namespace std;

class Card{
private:
	int num;
	string col = "";

public:
	Card(int num = 0, string col = "none"){
		this->num = num;
		this->col = col;
	}
	~Card(){

	}

	string colour(){
		return col;
	}

	int number(){
		return num;
	}

	void print(){
		cout << "colour: " << col << endl;
		cout << "number: " << num << endl;
	}
};