#include <iostream>

using namespace std;

class Example
{
	int x, y;
public:
	Example(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void Print() {
		cout << "X: " << x << "\n";
		cout << "Y: " << y << "\n";
	}
	Example();
	~Example();

private:

};

Example::Example()
{
}

Example::~Example()
{
}

int main()
{
	Example example = Example();
	Example xy(50, 100);
	xy.Print();
}