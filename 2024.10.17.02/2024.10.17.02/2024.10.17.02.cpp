#include <iostream>

using namespace std;

class Number
{
	int mNumber;
public:
	void SetNumb(int number) { mNumber = number; }
	int GetNumb() { return mNumber; }
	Number();
	~Number();

private:

};

Number::Number()
{
}

Number::~Number()
{
}

int main()
{
	Number nb = Number();
	nb

}