#include <iostream>

using namespace std;

class Number
{
	int mNumber = 10;
public:
	void SetNumb(int mValue) { mNumber = mValue; }
	int GetNumb() { return mNumber; }
	void Print();
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
void Number::Print() {
	cout << mNumber;
}
void Print(Number n) {
	n.Print();
}

int main()
{
	Number nb = Number();
	Print(nb);


}