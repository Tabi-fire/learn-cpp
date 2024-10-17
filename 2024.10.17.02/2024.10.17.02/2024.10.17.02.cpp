#include <iostream>

using namespace std;

class Number
{
	int mNumber = 0;
public:
	void SetNumb(int number) { mNumber = number; }
	int GetNumb() { return mNumber; }
	int Print();
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
int Number::Print() {
	Number nb = Number();
	nb.SetNumb(10);
	return nb.GetNumb();
}

int main()
{
	Number nb = Number();
	cout << nb.Print();

}